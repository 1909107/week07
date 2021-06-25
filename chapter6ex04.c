#include <stdio.h>
//Given an amount of money (less than $1.00), compute the number of quarters, dimes, nickels, and pennies needed.//
char line[100]; 
int centavos;
int cuartos = 0;
int dimes = 0;
int monedasdecincocentavos = 0;
int monedasdeuncentavo = 0;
int main() {
printf("Ingrese el numero de centavos : ");
 fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &centavos);
while(centavos != 0){
if (centavos >= 25) {
++cuartos;
centavos -= 25;
}if (centavos >= 10) {
++dimes;
centavos -= 10;
}if (centavos >= 5) {
++monedasdecincocentavos;
centavos -= 5;
}if (centavos >= 1) {
++monedasdeuncentavo;
--centavos;
}if (centavos== 0){
}
}
printf("%d cuartos %d dimes %d monedas de cincocentavos %d monedas de uncentavo ",
cuartos, dimes, monedasdecincocentavos,monedasdeuncentavo);
return(0);
}
