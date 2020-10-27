#include <stdio.h>

float potenciaLampada(float largura, float profundidade) {
    float metrosQuadrados = largura * profundidade;
    float potencia = metrosQuadrados * 18;
    return potencia;
}

int main(int argc, char **argv) {
    float largura, profundidade;
    printf("Escreva a largua e profundide da sala respectivamente: ");
    scanf("%f %f", &largura, &profundidade);
    printf("Potência necessária: %.1f\n", potenciaLampada(largura, profundidade));
}