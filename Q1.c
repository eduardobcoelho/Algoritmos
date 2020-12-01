#include <stdio.h>
#include <string.h>

int somaNumeros(int numero) {
    if (numero == 1){
        return 1;
    } else {
        return numero + somaNumeros(numero-1);
    }
}

int main(int argc, char **argv) {
    int numNaturais, somaNumNaturais;
    scanf("%d", &numNaturais);
    somaNumNaturais = somaNumeros(numNaturais);
    printf("Soma dos primeiros %d numeros naturais: %d\n", numNaturais, somaNumNaturais);
    return 0;
}