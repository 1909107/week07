#include <stdio.h>
char line[100]; 
int main() {
    char v;
    int vocal1, vocal2;
    printf("Ingresa una palabra  ");
fgets(line, sizeof(line), stdin);
sscanf(line,"%c", &v);
    vocal1 = (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u');
    vocal2 = (v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U');
    if (vocal1 || vocal2)
        printf("%c es una vocal ", v);
    else
        printf("%c es una consonante ", v);
    return 0;
}
