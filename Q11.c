#include <stdio.h>

int main (int argc, char **argv) {
    int numeroUm, numeroDois, numeroTres, numeroQuatro, numeroCinco;
    scanf("%d %d %d %d %d", &numeroUm, &numeroDois, &numeroTres, &numeroQuatro, &numeroCinco);

    if (numeroUm >= numeroDois && numeroUm >= numeroTres && numeroUm >= numeroQuatro && numeroUm >= numeroCinco) {

        if (numeroDois <= numeroUm && numeroDois <= numeroTres && numeroDois <= numeroQuatro && numeroDois <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroDois);
        } else if (numeroTres <= numeroUm && numeroTres <= numeroDois && numeroTres <= numeroQuatro && numeroTres <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroTres);
        } else if (numeroQuatro <= numeroUm  && numeroQuatro <= numeroDois  && numeroQuatro <= numeroTres  && numeroQuatro <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroQuatro);
        } else if (numeroCinco <= numeroUm && numeroCinco <= numeroDois && numeroCinco <= numeroTres && numeroCinco <= numeroQuatro) {
            printf("Maior: %d\nMenor: %d\n", numeroUm, numeroCinco);
        }

    } else if (numeroDois >= numeroUm && numeroDois >= numeroTres && numeroDois >= numeroQuatro && numeroDois >= numeroCinco) {

        if (numeroUm <= numeroDois && numeroUm <= numeroTres && numeroUm <= numeroQuatro && numeroUm <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroDois, numeroUm);
        } else if (numeroTres <= numeroUm && numeroTres <= numeroDois && numeroTres <= numeroQuatro && numeroTres <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroDois, numeroTres);
        } else if (numeroQuatro <= numeroUm  && numeroQuatro <= numeroDois  && numeroQuatro <= numeroTres  && numeroQuatro <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroDois, numeroQuatro);
        } else if (numeroCinco <= numeroUm && numeroCinco <= numeroDois && numeroCinco <= numeroTres && numeroCinco <= numeroQuatro) {
            printf("Maior: %d\nMenor: %d\n", numeroDois, numeroCinco);
        }
        
    } else if (numeroTres >= numeroUm && numeroTres >= numeroDois && numeroTres >= numeroQuatro && numeroTres >= numeroCinco) {

        if (numeroUm <= numeroDois && numeroUm <= numeroTres && numeroUm <= numeroQuatro && numeroUm <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroTres, numeroUm);
        } else if (numeroDois <= numeroUm && numeroDois <= numeroTres && numeroDois <= numeroQuatro && numeroDois <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroTres, numeroDois);
        } else if (numeroQuatro <= numeroUm  && numeroQuatro <= numeroDois  && numeroQuatro <= numeroTres  && numeroQuatro <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroTres, numeroQuatro);
        } else if (numeroCinco <= numeroUm && numeroCinco <= numeroDois && numeroCinco <= numeroTres && numeroCinco <= numeroQuatro) {
            printf("Maior: %d\nMenor: %d\n", numeroTres, numeroCinco);
        }
    } else if (numeroQuatro >= numeroUm && numeroQuatro >= numeroDois && numeroQuatro >= numeroTres && numeroQuatro >= numeroCinco) {

        if (numeroUm <= numeroDois && numeroUm <= numeroTres && numeroUm <= numeroQuatro && numeroUm <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroQuatro, numeroUm);
        } else if (numeroDois <= numeroUm && numeroDois <= numeroTres && numeroDois <= numeroQuatro && numeroDois <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroQuatro, numeroDois);
        } else if (numeroTres <= numeroUm  && numeroTres <= numeroDois  && numeroTres <= numeroQuatro  && numeroTres <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroQuatro, numeroTres);
        } else if (numeroCinco <= numeroUm && numeroCinco <= numeroDois && numeroCinco <= numeroTres && numeroCinco <= numeroQuatro) {
            printf("Maior: %d\nMenor: %d\n", numeroQuatro, numeroCinco);
        }

    } else if (numeroCinco >= numeroUm && numeroCinco >= numeroDois && numeroCinco >= numeroTres && numeroCinco >= numeroQuatro) {

        if (numeroUm <= numeroDois && numeroUm <= numeroTres && numeroUm <= numeroQuatro && numeroUm <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroCinco, numeroUm);
        } else if (numeroDois <= numeroUm && numeroDois <= numeroTres && numeroDois <= numeroQuatro && numeroDois <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroCinco, numeroDois);
        } else if (numeroTres <= numeroUm  && numeroTres <= numeroDois  && numeroTres <= numeroQuatro  && numeroTres <= numeroCinco ) {
            printf("Maior: %d\nMenor: %d\n", numeroCinco, numeroTres);
        } else if (numeroQuatro <= numeroUm && numeroQuatro <= numeroDois && numeroQuatro <= numeroTres && numeroQuatro <= numeroCinco) {
            printf("Maior: %d\nMenor: %d\n", numeroCinco, numeroQuatro);
        }
    }
}