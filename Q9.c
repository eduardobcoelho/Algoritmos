#include <stdio.h>

int main (int argc, char **argv) {
    int numero;
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é par\n", numero);
    } else {
        printf("%d é ímpar\n", numero);
    }
}
