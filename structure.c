#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *removeAreaNaoUsada(char *s) {
    char *enderecoNovo, *enderecoOrigem, *enderecoDestino;
    enderecoNovo = (char*)malloc(sizeof(char)*(strlen(s)+1));
    enderecoOrigem = s;
    enderecoDestino = enderecoNovo;
    while(*enderecoOrigem != '\0') {
        *enderecoDestino=*enderecoOrigem;
        enderecoDestino++;
        enderecoOrigem++;
        
    }
    *enderecoDestino=*enderecoNovo;
    return enderecoNovo;
}

int main(int argc, char **argv) {
    char *s, *aux;
    scanf("%[^\n]", s);
    aux = s;
    aux = removeAreaNaoUsada(s);
    free(aux);
    return 0;
}