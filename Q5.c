#include <stdio.h>

int main(int argc, char **argv) {
    int i, contAcimaMedia = 0;
    
    float somaNotas = 0.0, media=0.0, notasAlunos[30], notasAlunosAcimaMedia[30];

    // Ler notas
    for (i = 0; i < 30; i++) {
        scanf("%f", &notasAlunos[i]);
        somaNotas+= notasAlunos[i];
    }

    // Calcular e mostrar media
    media = ((somaNotas) / 30.0);
    printf("Media total: %.2f\n", media);

    // Contas e adicionar alunos acima da media
    for (i = 0; i < 30; i++) {
        if (notasAlunos[i] > media) {
            notasAlunosAcimaMedia[contAcimaMedia] = notasAlunos[i];
            contAcimaMedia++;
        }
    }

    // Mostrar quantidade de alunos acima da media e suas notas
    printf("Existem %d alunos acima da media\nNotas acima da media: \n", contAcimaMedia);
    for (i = 0; i < contAcimaMedia; i++) {
        printf("%.2f\n", notasAlunosAcimaMedia[i]);
    }
}
