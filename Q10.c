#include <stdio.h>

int main(int argc, char **argv) {
    int numero, digitoUnidade;
    scanf("%d", &numero);
    digitoUnidade = numero % 10;
    printf("Digito da unidade do numero: %d\n", digitoUnidade);
}