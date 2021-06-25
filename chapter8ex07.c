#include <stdio.h>
char line[100]; 
int main (void)
{
int number, a, b, c, d;
printf("ingrese un numero entre el 1 y 3,999:\n");
fgets(line, sizeof(line), stdin);
sscanf (line,"%d", & number);
d = number%10;
number = number/10;
c = number%10;
number = number/10;
b = number%10;
a = number/10;
switch (a){
case 1: printf ("one thousand "); break;
case 2: printf ("two thousand "); break;
case 3: printf ("three thousand "); break;
default: break;
}
switch (b){
case 1: printf ("one hundred "); break;
case 2: printf ("two hundred "); break;
case 3: printf ("three hundred "); break;
case 4: printf ("four hundred "); break;
case 5: printf ("five hundred "); break;
case 6: printf ("six hundred "); break;
case 7: printf ("seven hundred "); break;
case 8: printf ("eight hundred "); break;
case 9: printf ("nine hundred "); break;
default: break;
}
switch (c){
case 1: printf ("then "); break;
case 2: printf ("twenty "); break;
case 3: printf ("thirty "); break;
case 4: printf ("forty "); break;
case 5: printf ("fifty "); break;
case 6: printf ("sixty "); break;
case 7: printf ("seventy "); break;
case 8: printf ("eighty "); break;
case 9: printf ("ninety "); break;
default: break;
}
switch (d) {
case 1: printf ("one "); break;
case 2: printf ("two "); break;
case 3: printf ("three "); break;
case 4: printf ("four "); break;
case 5: printf ("five "); break;
case 6: printf ("six "); break;
case 7: printf ("seven "); break;
case 8: printf ("eight "); break;
case 9: printf ("nine "); break;
case 10: printf ("eleven "); break;
case 11: printf ("twelve "); break;
  
default: break;
}
return 0;
}
