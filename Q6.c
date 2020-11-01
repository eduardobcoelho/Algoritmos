#include <stdio.h>

int main (int argc, char **argv) {
    float notaAluno;
    scanf("%f", &notaAluno);

    if (notaAluno >= 0.0 && notaAluno <= 10.0) {
        printf("nota válida: %.1f\n", notaAluno);
    } else {
        printf("nota invalida: %.1f\n", notaAluno);
    }
}
