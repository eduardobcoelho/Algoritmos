#include <stdio.h>

int main (int argc, char **argv) {
	int numero;
    scanf("%d", &numero);

    if (numero > 0) {
        printf("%d é positivo!!\n", numero);
    } else if (numero == 0) {
        printf("%d é nulo\n", numero);
    } else if (numero < 0) {
        printf("%d é negativo\n", numero);
    }
}