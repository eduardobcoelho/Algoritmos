#include <stdio.h> 

int quantidadeLampadas(float largura, float profundidade){
    float metrosQuadrados = largura * profundidade;
    int qtdLampadas = (metrosQuadrados * 18) / 60;
}

int main(int argc, char **argv){
    float largura, profundidade;
    printf("Digite a largura e a profundidade: ");
    scanf("%f %f", &largura, &profundidade);
    printf("Quantidade de lampadas de 60W necessárias: %d\n", quantidadeLampadas(largura, profundidade));
}