#include <stdio.h>

int main (int argc, char **argv) {
    int medida;
    scanf("%d", &medida);

    if (medida >= 0 && medida <= 90 ) {

        if (medida == 0) {
            printf("A medida encontra-se no eixo 0°\n");
        } else if (medida == 90) {
            printf("A medida encontra-se no eixo 90°\n");
        } else {
            printf("Primeiro quadrante: %d°\n", medida);
        }

    } else if (medida > 90 && medida <= 180) {
        
        if (medida == 180) {
            printf("A medida encontra-se no eixo 180°\n");
        } else {
            printf("Segunda quadrante: %d°\n", medida);
        }

    } else if (medida > 180 && medida <= 270) {
        
        if (medida == 270) {
            printf("A medida encontra-se no eixo 270°\n");
        } else {
            printf("Terceiro quadrante: %d°\n", medida);
        }

    } else if (medida > 270 && medida <= 360) {

        if (medida == 360) {
            printf("A medida encontra-se no eixo 360°\n");
        } else {
            printf("Quarto quadrante: %d°\n", medida);
        }

    }
}
