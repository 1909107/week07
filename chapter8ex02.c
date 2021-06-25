#include<stdio.h>
//The total resistance of n resistors in parallel is, Suppose we have a network of two resistors with the values 400 and 200 . Then our equation would be//
#include<stdlib.h>
#include<math.h>
char line[100]; 
int main() {
int i;
float rs_final=0;
float rs = 1.0;
float rs1;
float num;
double r[10];
double raiz=-1;
printf("ingrese el numero de las resistencias : ");
fgets(line, sizeof(line), stdin);
sscanf(line,"%f", &num);
printf(" ingrese el valor de la resistencia si");
for (i = 0; i < num; i++) {
printf(" R%d : ", i + 1);
fgets(line, sizeof(line), stdin);
sscanf(line,"%lf", &r[i]);
}
for (i = 0; i < num; i++) {
rs_final = (1.0/r[i]) + rs_final;
}
double f = pow (rs_final, raiz);
printf("\nEquivalent Series Resistance : %.2lf Kohm", f);
return (0);
}
