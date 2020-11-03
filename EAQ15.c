#include <stdio.h>

int main (int argc, char **argv) {
    int primeiroArray[31], segundoArray[31], terceiroArray[31], contadorTerceiroArray = 0, i;

    for (i = 0; i < 30; i++) {
        scanf("%d %d", &primeiroArray[i], &segundoArray[i]);
    }

    for (i = 0; i < 30; i++) {
        if (primeiroArray[i] == segundoArray[i]){
            terceiroArray[contadorTerceiroArray] = primeiroArray[i];
            contadorTerceiroArray++;
        }
    }

    for (i = 0; i < contadorTerceiroArray; i++) {
        printf("TerceiroArray[%d] = %d\n", i, terceiroArray[i]);
    }
}