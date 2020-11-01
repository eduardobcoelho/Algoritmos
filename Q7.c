#include <stdio.h>

int main (int argc, char **argv) {
    float notaUm, notaDois, media;
    scanf("%f %f", &notaUm, &notaDois);
    media = (notaUm + notaDois) / 2.0;
    
    if (media >= 6.0) {
        printf("O aluno passou com a média: %.1f\n", media);
    } else {
        printf("O aluno não passou com a média: %.1f\n", media);
    }
}
