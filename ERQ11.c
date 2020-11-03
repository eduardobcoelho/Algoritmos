#include <stdio.h>

int multiplicacao (int numero, int iterador) {
    return (numero * iterador);
}

int main (int argc, char **argv) {
    int numero;
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        printf("%d x %d = %d \n", numero, i, multiplicacao(numero, i));
    }
}