#include <stdio.h>

int main (int argc, char **argv) {
    int qNumeros, i, qAbaixoMedia = 0, qAcimaMedia;
    scanf("%d", &qNumeros);
    float arrayNumeros[qNumeros + 1], numerosSoma = 0.0, media;

    printf("São/É %d número(s) \n", qNumeros);
    printf("Digite o(s) %d valor(es) para o array: \n", qNumeros);

    for (i = 0; i < qNumeros; i++) {
        scanf("%f", &arrayNumeros[i]);
        numerosSoma += arrayNumeros[i];
    }

    media = ((numerosSoma) / (qNumeros));

    for (i = 0; i < qNumeros; i++) {
        if(arrayNumeros[i] < media) {
            qAbaixoMedia++;
        }
    }

    for (i = 0; i < qNumeros; i++) {
        if(arrayNumeros[i] > media) {
            qAcimaMedia++;
        }
    }

    printf("Existem/Existe %d valor(es) acima da média %.2f\n", qAcimaMedia, media);
    printf("Os valor(es) acima da média são/é: \n");

    for (i = 0; i < qNumeros; i++) {
        if(arrayNumeros[i] > media) {
            printf("%.2f\n", arrayNumeros[i]);
        }
    }

    printf("Existem/Existe %d valor(es) abaixo da média %.2f\n", qAcimaMedia, media);
    printf("Os valor(es) abaixo da média são/é: \n");

    for (i = 0; i < qNumeros; i++) {
        if(arrayNumeros[i] < media) {
            printf("%.2f\n", arrayNumeros[i]);
        }
    }

    return 0;
}