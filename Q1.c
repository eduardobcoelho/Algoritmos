#include <stdio.h>

int main(int argc, char **argv) {
    char mensagem[80];
    scanf("%[^\n]", mensagem);
    printf("Primeiras três letras: %c %c %c\n", mensagem[0], mensagem[1], mensagem[2]);
}