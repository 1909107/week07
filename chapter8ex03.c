#include<stdio.h>
char line[100]; 
int main()
{
int i;
float Average, n ,numbers, Sum ;
printf("Ingrese la cantidad de numeros ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%f",&n);
printf("ingrese los numeros de uno en uno ");
for(i=0;i<n;++i)
{
fgets(line, sizeof(line), stdin);
sscanf(line, "%f",&numbers);
Sum = Sum +numbers;
}
Average = Sum/n;
printf("Average of the Numbers is = %.2f", Average);
return 0;
}
