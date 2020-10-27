#include <stdio.h>

int main(int argc, char **argv) {
    float primeiraNota, segundaNota, mediador;
    scanf("%f %f", &primeiraNota, &segundaNota);
    printf("Antes da inversão: %.1f %.1f\n", primeiraNota, segundaNota);

    mediador = primeiraNota;
    primeiraNota = segundaNota + 0;
    segundaNota = mediador + 0;

    printf("Depois da inversão: %.1f %.1f\n", primeiraNota, segundaNota);
}