#include <stdio.h>
//Write a program to convert English units to metric (i.e., miles to kilometers, gallons to liters, etc.)//
char line[100]; 
int main() {
float ingrese,valor,conversion;
float mil=25.4;
float pulgada=2.54;
float tpie=30.48;
float yarda=91.44;
float rod=5.0292;
float cadena=20.1168;
float furlong =201.168;
float milla=1.609347;
float legua=4.828032;
float galon= 3.785411784;
float barril=158.987294928;
printf("ingrese 1 para mil, 2 para pulgada, 3 para tpie, 4 para yarda, 5 para rod, 6 para cadena, 7 para furlong, 8 para milla, 9 para legua, 10 para galon, 11 para barril\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &valor);
printf("ingrese el valor a comvertir ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &valor);
if(ingrese==1){
valor=valor*mil;
printf("el valor en mil es %f", valor);
}
else if(ingrese==2){
valor=valor*pulgada;
printf("el valor en pulgada es %f", valor);
}
else if(ingrese==3){
valor=valor*tpie;
printf("el valor en tpie es %f", valor);
}
else if(ingrese==4){
valor=valor*yarda;
printf("el valor en yarda es %f", valor);
}
else if(ingrese==5){
valor=valor*rod;
printf("el valor en rod es %f", valor);
}
else if(ingrese==6){
valor=valor*cadena;
printf("el valor en cadena es %f", valor);
}
else if(ingrese==7){
valor=valor*furlong;
printf("el valor en furlong es %f", valor);
}
else if(ingrese==8){
valor=valor*milla;
printf("el valor en milla es %f", valor);
}
else if(ingrese==9){
valor=valor*legua;
printf("el valor en legua es %f", valor);
}
else if(ingrese==10){
valor=valor*galon;
printf("el valor en galón es %f", valor);
}
else if(ingrese==11){
valor=valor*barril;
printf("el valor en barril es %f", valor);
}
return 0;
}
