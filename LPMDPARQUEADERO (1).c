/*Proyecto final - Martina Damián y Luis Pozo - 23.01.24 */

#include <stdio.h>

int main() {
  
    int horas, minutos;
    char ans, domingo;
    float minstotal, cobrototal, cambio, pagototal;
    
  do
  {
    do{
    printf("Ingresa la cantidad de Horas Y Minutos totales:(PRIMERO            INGRESAR LAS HORAS Y DESPUÉS LOS MINUTOS)\n");
    scanf("%d%d", &horas, &minutos);
    }while(horas<0 || (minutos<0 || minutos>60));

    if (horas!=0 && minutos>0)
    {
      minutos=60;
    }
    minstotal = horas * 60 + minutos;

    if (minstotal <= 10) {
        cobrototal = 0;
    } else if (minstotal <= 25) {
        cobrototal = 3;
    } else if (minstotal <= 60) {
        cobrototal = 10;
    } else {
        cobrototal = 10 + 5 * ((minstotal - 60) / 60);
    }

    do{
    printf("Es Domingo? (S/N): ");
    scanf(" %c", &domingo);
    }while(domingo != 'S' && domingo != 'N');
      
    if (domingo == 'S' || domingo == 's') {
        cobrototal *= 0.9;
    }
    do
    {  
    
    printf("Ingresar cantidad pagada: ");
    scanf("%f", &pagototal);
    cambio = pagototal - cobrototal;
    if (cambio<0)
      {
      printf("El monto pagado es insuficiente, ingrese un nuevo monto");
      }
    }while(cambio<0);
  
  printf("Cobro total: $%.2f\n", cobrototal);
  printf("Cambio: $%.2f\n", cambio);
    
  printf("Desea repetir el proceso? (S/N):");
  scanf(" %c", &ans);
  }while(ans=='s'||ans=='S');
    return 0;
}
