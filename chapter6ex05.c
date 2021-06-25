#include <stdio.h>
//A leap year is any year divisible by 4, unless the year is divisible by 100, but not 400. Write a program to tell if a year is a leap year//
char line[100]; 
int main() {
int año;
printf("Ingrese un año ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%i", &año);
if (año % 400 == 0) {
printf("%i no es un salto de año ", año);
}
else if (año % 100 == 0) {
printf("%i es un salto de año", año);
}
else if (año % 4 == 0) {
printf("%i es un salto de año", año);
}
else {
printf("%i no es un salto de año", año);
}
return 0;
}
