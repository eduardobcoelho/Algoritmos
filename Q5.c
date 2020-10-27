#include <stdio.h>

float mediaPonderada(float nota1, float nota2) {
    float sum = ((nota1 * 2) + (nota2 * 3));
    return (sum / 5);
}

int main(int argc, char **argv) {
    float nota1, nota2;
    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    printf("Média : %.1f\n", mediaPonderada(nota1, nota2));
}