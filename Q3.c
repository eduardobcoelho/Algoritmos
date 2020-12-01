#include <stdio.h>
#include <string.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

int main(int argc, char **argv) {
    int numero, valorFatorial;
    scanf("%d", &numero);
    valorFatorial = fatorial(numero);
    printf("%d! = %d\n", numero, valorFatorial);
    return 0;
}