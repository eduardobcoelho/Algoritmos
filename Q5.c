#include <stdio.h>
#include <string.h>
#define MAX_TAMANHO 30

int somaElementosArray(int arrayX[MAX_TAMANHO], int quantidade) {
    if (quantidade == 1) {
        return arrayX[0];
    } else {
        return arrayX[quantidade-1] + somaElementosArray(arrayX, quantidade-1);
    }
}

int main(int argc, char **argv) {
    int i, quantidadeElementosArray, somaElementosDoArray;
    scanf("%d", &quantidadeElementosArray);
    int arrayA[quantidadeElementosArray];
    for (i = 0; i < quantidadeElementosArray; i++) {
        scanf("%d", &arrayA[i]);
    }
    somaElementosDoArray = somaElementosArray(arrayA, quantidadeElementosArray);
    printf("Soma dos elemtos do array: %d\n", somaElementosDoArray);
    return 0;
}