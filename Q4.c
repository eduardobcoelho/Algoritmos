#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int i = 0, contPar = 0;
    char mensagem[80];
    scanf("%[^\n]", mensagem);

    while (mensagem[i] != '\0') {
        if (mensagem[i] == 'a' || mensagem[i] == 'e' || mensagem[i] == 'i' || mensagem[i] == 'o' || mensagem[i] == 'u'){
            contPar++;
        }
        i++;
    }
    printf("A frase: '%s' possui %d vogais\n", mensagem, contPar);
}