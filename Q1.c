#include <stdio.h>
#include <string.h>

char *meuStrStr(const char *s1, const char *s2) {
    int cont=0, tamanhoStringUm = strlen(s1), tamanhoStringDois = strlen(s2);
    char *ptrStringUm = s1, *ptrStringDois = s2, *posicaoOcorrencia;

    while (*ptrStringDois != '\0') {
        
    }
    
    
    
}

int main(int argc, char **argv) {
    char primeraString[20], segundaString[20], *ponteiro;
    scanf("%[^\n] %[^\n]", primeraString, segundaString);
    ponteiro = meuStrStr(primeraString, segundaString); 
    return 0;
}