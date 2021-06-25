#include<stdio.h>
//: A serial transmission line can transmit 960 characters each second. Write a program that will calculate the time required to send a file, given the file's size. Try the prog ram on a 400MB (419,430,400 -byte) file//
char line[100];
float s,t,t2,f,j=1.0;
int main(void){
 printf("ingrese el tamaño del archivo ");
fgets(line, sizeof(line), stdin);
sscanf(line,"%f", &s);
while (s > 0){
  if (s > 960){
    t=t+1;
    s=s-960;
  }
  if (s <= 960){
    t2= (s*j)/960;
    break;
  }
}
f=t+t2;
printf("los segundos en los que se tardaron en enviar el archivo %f", f);
  return 0;
}
