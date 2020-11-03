#include <stdio.h>
#include <string.h>

int main (int argc, char **argv) {
    char frase[100], dif = 'a' - 'A';
    scanf("%[^\n]", frase);
    int tamanhoChar = strlen(frase), i;

    for (i = 0; i < tamanhoChar; i++) {
        if (frase[i] != '0' && frase[i] != '1' && frase[i] != '2' && frase[i] != '3' && frase[i] != '4' && frase[i] != '5' && frase[i] != '6' && frase[i] != '7' && frase[i] != '8' && frase[i] != '9' && frase[i] != ' ' && frase[i] != '!' && frase[i] != '?' && frase[i] != '@' && frase[i] != '#' && frase[i] != '$' && frase[i] != '$' && frase[i] != '%' && frase[i] != '&' && frase[i] != '*' && frase[i] != '(' && frase[i] != ')' && frase[i] != '-' && frase[i] != '+' && frase[i] != '-' && frase[i] != '_' && frase[i] != '[' && frase[i] != ']' && frase[i] != '{' && frase[i] != '}' && frase[i] != 'º' && frase[i] != 'ª' && frase[i] != '/' && frase[i] != '|' && frase[i] != ',' && frase[i] != '.' && frase[i] != ';' && frase[i] != ':' && frase[i] != '>' && frase[i] != '<' && frase[i] != '=') {
            if (frase[i] >= 'a' && frase[i] <= 'z') {
                frase[i] -= dif;
            } else {
                frase[i] += dif;
            }
        }
    }
    printf("%s\n", frase);
    return 0;
}