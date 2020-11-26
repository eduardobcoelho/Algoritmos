#include <stdio.h>

int main(int argc, char **argv) {
    int i, contPar = 0, numeros[20], numerosPares[20];

    for (i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 ==0) {
            numerosPares[contPar] = numeros[i];
            contPar++;
        } else {}
    }

    printf("Existem %d numeros pares: \n", contPar);

    for (i = 0; i < contPar; i++) {
        printf("%d ", numerosPares[i]);
    }
}