#include <stdio.h>
/*
 Escriba un programa que declare una variable entera y que compruebe si es par o
impar utilizando el operador módulo (%).
 */

int main() {
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("%d es un numero par.\n", num);
    } else {
        printf("%d es un numero impar.\n", num);
    }

    return 0;
}
