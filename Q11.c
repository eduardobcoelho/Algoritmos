#include <stdio.h>

int main (int argc, char **argv) {
    int numeroUm, numeroDois, numeroTres, numeroQuatro, numeroCinco;
    scanf("%d %d %d %d %d", &numeroUm, &numeroDois, &numeroTres, &numeroQuatro, &numeroCinco);

    if (numeroUm >= numeroDois && numeroUm >= numeroTres && numeroUm >= numeroQuatro && numeroUm >= numeroCinco) {

        if (numeroDois <= numeroUm numeroDois <= numeroTres numeroDois <= numeroQuatro numeroDois <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroDois);
        } else if (numeroTres <= numeroUm && numeroTres <= numeroDois && numeroTres <= numeroQuatro && numeroTres <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroTres);
        } else if (numeroQuatro <= numeroUm  && numeroQuatro <= numeroDois  && numeroQuatro <= numeroTres  && numeroQuatro <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroQuatro);
        } else if (numeroCinco <= numeroUm && numeroCinco <= numeroDois && numeroCinco <= numeroTres && numeroCinco <= numeroQuatro) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroCinco);
        }

    } else if (numeroDois >= numeroUm && numeroDois >= numeroTres && numeroDois >= numeroQuatro && numeroDois >= numeroCinco) {

        if (numeroDois <= numeroUm numeroDois <= numeroTres numeroDois <= numeroQuatro numeroDois <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroDois);
        } else if (numeroTres <= numeroUm && numeroTres <= numeroDois && numeroTres <= numeroQuatro && numeroTres <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroTres);
        } else if (numeroQuatro <= numeroUm  && numeroQuatro <= numeroDois  && numeroQuatro <= numeroTres  && numeroQuatro <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroQuatro);
        } else if (numeroCinco <= numeroUm && numeroCinco <= numeroDois && numeroCinco <= numeroTres && numeroCinco <= numeroQuatro) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroCinco);
        }
        
    } else if () {

    }
}