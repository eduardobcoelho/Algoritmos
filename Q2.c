#include <stdio.h>

int main (int argc, char **argv) {
    int numero;
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("%d é multiplo de 5\n", numero);
    } else {
        printf("%d não é multiplo de 5\n", numero);
    }
}