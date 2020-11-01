#include <stdio.h>

int raizValor (int numeroRaiz) {
    for(int i = 1; (numeroRaiz/2.0) >= i ; i++) {
        if (i * i == numeroRaiz){
            return i;
            break;
        }
    }
}

int quadradoValor (int numeroQuadrado) {
    int quadrado = (numeroQuadrado * numeroQuadrado);
    return quadrado;
}

int main (int main, char **argv){
    int numero, raiz, quadrado;
    scanf("%d", &numero);

    if (numero >= 0) {
        raiz = raizValor(numero);

        if (raiz >= numero ) {
            printf("%d não possui raíz\n", numero);
        } else {
            printf("Raíz de %d é: %d\n", numero, raiz);
        }
    } else {
        quadrado = quadradoValor(numero);
        printf("Quadrado de %d é: %d\n", numero, quadrado);       
    }
}
