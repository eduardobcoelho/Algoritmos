#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int i = 0, dif = 'A'-'a', test = 0;
    char mensagem[80];
    scanf("%[^\n]", mensagem);
    
    while(mensagem[i] != '\0') {
        test = mensagem[i];
        if (test >= 96 && test <= 123) {
            mensagem[i] += dif;
        }
        i++;
    }
    printf("%s\n", mensagem);
}