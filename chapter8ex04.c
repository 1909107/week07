#include <stdio.h>
//Write a program to print out the multiplication table.//
char line[100]; 
int main() {
    int n, i;
    printf("Ingrese un numero ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
