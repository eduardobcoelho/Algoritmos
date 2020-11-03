#include <stdio.h>

int main (int argc, char **argv) {
    int numero;
    float acumulador = 0;
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        acumulador += (1.0/i);
    }

    printf("%.2f\n", acumulador);
}