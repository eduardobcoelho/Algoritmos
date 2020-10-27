#include <stdio.h>

float media(float nota1, float nota2, float nota3){
    float soma = nota1 + nota2 + nota3;
    return (soma / 3.0);
}

int main(int argc, char **argv) {
    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Media aritmética: %.1f", media(n1, n2, n3));
}