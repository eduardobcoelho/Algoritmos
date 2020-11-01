#include <stdio.h>

int main (int argc, char **argv) {
    int numeroUm, numeroDois, numeroTres;
    scanf("%d %d %d", &numeroUm, &numeroDois, &numeroTres);

    if (numeroUm > numeroDois && numeroUm > numeroTres) {
        printf("%d\n", numeroUm);
    } else if (numeroDois > numeroUm && numeroDois > numeroTres) {
        printf("%d\n", numeroDois);
    } else if (numeroTres > numeroUm && numeroTres > numeroDois) {
        printf("%d\n", numeroTres);
    } else if (numeroUm == numeroDois && numeroUm > numeroTres) {
        printf("%d\n", numeroUm);
    } else if (numeroUm == numeroTres && numeroUm > numeroDois) {
        printf("%d\n", numeroUm);
    } else if (numeroDois == numeroTres && numeroDois > numeroUm) {
        printf("%d\n", numeroDois);
    } else if (numeroUm == numeroDois && numeroUm < numeroTres) {
        printf("%d\n", numeroTres);
    } else if (numeroUm == numeroTres && numeroUm < numeroDois) {
       printf("%d\n", numeroDois);
    } else if (numeroDois == numeroTres && numeroDois < numeroUm) {
        printf("%d\n", numeroUm);
    } else {
        printf("Os números são iguais\n");
    }
}
