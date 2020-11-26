#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int contElementos = 0;
    char mensagem[80];
    scanf("%[^\n]", mensagem);

    for (int i = 0; i < 80; i++) {
        if (mensagem[i] == '\0') {
            break;
        } else {
            if (mensagem[i] != ' '){
                contElementos++;
            } else { }
        }
    }
    printf("Possui %d letras\n", contElementos);   
}