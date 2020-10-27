#include <stdio.h>

int valorDelta(int a, int b, int c) {
    int delta = (b * b) - (4*a*c);
    return delta;
}

int raizQuadrada(int a) {
    int raizQuadradaValor;
    for(int i = 1; (a/2.0) >= i ; i++) {
        if (i * i == a){
            raizQuadradaValor = i;
            break;
        }
    }
}

float primeiraRaiz (int a, int b, int c, int raizDelta) {
    float raiz = (((-b) + (raizDelta)) / (2.0*a));
    return raiz;
}

float segundaRaiz(int a, int b, int c, int raizDelta) {
    float raiz = (((-b) - (raizDelta)) / (2.0*a));
    return raiz;
}

int main(int argc, char **argv) {
    int a, b, c, delta, raizDelta;
    float x1, x2;
    scanf("%d %d %d", &a, &b, &c); 
    delta = valorDelta(a, b, c);
    raizDelta = raizQuadrada(valorDelta(a, b, c));
    x1 = primeiraRaiz(a, b, c, raizDelta);
    x2 = segundaRaiz(a, b, c, raizDelta);
    printf("x1: %.2f\nx2: %.2f\n", x1, x2);
}