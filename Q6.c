#include <stdio.h>

int main(int argc, char **argv) {
    int i, maior = 0, indice = 0, arrayNumeros[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &arrayNumeros[i]);
    }
    maior = arrayNumeros[0];
    indice = 0;

    for (i = 0; i < 10; i++) {
        if (arrayNumeros[i] > maior) {
            maior = arrayNumeros[i];
            indice = i;
        }
    }

    printf("Maior numero do array: %d\nIndice: %d\n", maior, indice);
}