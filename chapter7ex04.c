#include <stdio.h>
// Write a program to add an 8% sales tax to a given amount and round the result to the nearest penny//
char line[100]; 
int main()
{
float valor;
float tax=0.08;
float valor_final;
printf("ingrese el valor ");
 fgets(line, sizeof(line), stdin);
sscanf(line,"%f", &valor);
valor_final= valor * tax;
valor_final=valor_final + valor;
printf("valor final con el 8 porciento del tax agregado %.2f",valor_final);
return 0;
}
