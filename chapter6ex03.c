#include <stdio.h>
#include <math.h>
char line[100]; 
int a;
int main(void){
 printf("Ingresar una califiacion ");
 fgets(line, sizeof(line), stdin);
  sscanf(line, "%i", &a);
 if (a < 60) {
   printf("F");
 }
 else if (a >= 61 && a <= 63){
   printf("D-");}
 else if (a >= 64 && a <= 67){
   printf("D");}
 else if (a >= 68 && a <= 70){
   printf("D+");}
 else if (a >= 71 && a <= 73){
   printf("C-");}
 else if (a >= 74 && a <= 77){
   printf("C");}
 else if (a >= 78 && a <= 80){
   printf("C+");}
 else if (a >= 81 && a <= 83){
   printf("B-");}
 else if (a >= 84 && a <= 87){
   printf("B");}
 else if (a >= 88 && a <= 90){
   printf("B+");}
 else if (a >= 91 && a <= 93){
   printf("A-");}
 else if (a >= 94 && a <= 97){
   printf("A");}
 else if (a >= 98 && a<= 100){
   printf("A+");}
return 0;
}
