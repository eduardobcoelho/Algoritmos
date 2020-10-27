#include <stdio.h>

float mediaPonderada(float n1, float n2, int p1, int p2){
    float sum = (n1 * p1) + (n2 * p2);
    return sum / (p1 + p2);
}

int main(int argc, char **argv) {
    float n1, n2;
    int p1, p2;
    printf("Digite duas nota e 2 pesos respectivos às notas: \n");
    scanf("%f %f %d %d", &n1 , &n2, &p1, &p2);
    printf("Média: %.1f\n", mediaPonderada(n1, n2, p1, p2));
}
