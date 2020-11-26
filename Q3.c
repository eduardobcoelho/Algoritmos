#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int i, quantElementos = 0;
    char mensagem[80];
    scanf("%[^\n]", mensagem);
    while (mensagem[i] != '\0') {
        quantElementos++;
        i++;   
    }
    
    for (i = quantElementos; i >= 0; i--) {
        if (i == 0) {
            printf("%c\n", mensagem[i]);
            break;
        } else {
            printf("%c", mensagem[i]);
        }
    }
}