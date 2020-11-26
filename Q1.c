#include <stdio.h>

int main (int argc, char **argv) {
    int i, numeros[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
}