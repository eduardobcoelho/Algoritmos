#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int i, quantChar = 0, ePalindromo = 0;
    char palavra[50], palavraCopia[50], intermediador[2];
    scanf("%[^\n]", palavra);
    quantChar = strlen(palavra);

    for (i = 0; i <= quantChar; i++) {
        if (i != quantChar) {
            palavraCopia[i] = palavra[i];
        } else {
            palavraCopia[i] = '\0';
        }
    }

    for (i = 0; i < (quantChar / 2); i++) {
        intermediador[0] = palavra[(quantChar - 1) - i];
        palavra[(quantChar - 1) - i] = palavra[i];
        palavra[i] = intermediador[0];
    }

    for (i = 0; i < quantChar; i++) {
        if(palavra[i] != palavraCopia[i]) {
            ePalindromo++;
            break;
        } 
    }
    
    if (ePalindromo == 0) {
        printf("%s é palíndromo: %s\n", palavraCopia, palavra);
    } else {
        printf("%s não é palíndromo: %s\n", palavraCopia, palavra);
    }
}