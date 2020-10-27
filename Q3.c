#include <stdio.h>

int soma (num1, num2) {
    return num1+num2;
}

int main(int argc, char **argv) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Resultado da soma: %d \n", soma(a,b));
}