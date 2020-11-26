#include <stdio.h>

int main(int argc, char **argv) {
    int i, maior = 0, maiorIndice = 0, menor = 0, menorIndice = 0, arrayNumeros[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &arrayNumeros[i]);
    }
    maior = arrayNumeros[0];
    maiorIndice = 0;
    menor = arrayNumeros[0];
    menorIndice = 0;

    for (i = 0; i < 10; i++) {
        if (arrayNumeros[i] > maior) {
            maior = arrayNumeros[i];
            maiorIndice = i;
        }  
    }

    for (i = 0; i < 10; i++) {
        if (arrayNumeros[i] < menor) {
            menor = arrayNumeros[i];
            menorIndice = i;
        }  
    }

    printf("Maior numero do array: %d; indice do maior numero: %d\n", maior, maiorIndice);
    printf("Menor numero do array: %d; indice do menor numero: %d\n", menor, menorIndice);

}