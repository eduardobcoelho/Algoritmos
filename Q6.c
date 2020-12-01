#include <stdio.h>
#include <string.h>
#define MAX_TAMANHO 30

int maiorElementoArray(int arrayX[MAX_TAMANHO], int quantidade) {
    int maior;
    if (quantidade == 1) {
        maior = arrayX[0];
    } else {
        maior = maiorElementoArray(arrayX, quantidade-1);
        if (arrayX[quantidade-1]>maior) {
            maior = arrayX[quantidade-1];
        }
    }
    return maior;
}

int main(int argc, char **argv) {
    int quantidadeArray, maiorElementoDoArray;
    scanf("%d", &quantidadeArray);
    int arrayA[quantidadeArray];
    maiorElementoDoArray = maiorElementoArray(arrayA, quantidadeArray);
    return 0;
}