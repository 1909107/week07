#include<stdio.h>
char line[25];
int main()
{
int cantidad, i, j = 0, a[100];
int positivos=0;
int negativos= 0;
printf("ingrese la cantidad de numeros de la serie");
fgets(line, sizeof(line), stdin);
sscanf(line,"%d", &cantidad);
printf("ingrese los numeros de la serie ");
for(i = 0; i < cantidad; i++)
{
scanf("%d", &a[i]);
}
while(j < cantidad)
{
if(a[j] >= 0)
{
positivos++;
}
else
{
negativos++;
}
j++;
}
printf(" total de numeros positivos = %d ", positivos);
printf(" total de numeros negativos = %d ", negativos);
return 0;
}
