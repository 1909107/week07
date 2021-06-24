#include <stdio.h>
char line[100]; 
int main() {
int horas,dinero,pago;
printf("ingrese las horas que se trabajaron ");
scanf("%i",&horas);
printf("ingrese el pago por una hora de trabajo ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%i", &dinero);
if(horas>40){
pago += dinero*40;
pago+=(dinero*1.5)*(horas-40);
}
else{
pago+=dinero*40;
}
printf("el pago por las horas de trabajo es %i", pago);
return 0;
}
