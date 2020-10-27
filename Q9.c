#include <stdio.h>

int minutos(int horas, int minutos) {
    int minutosHoras = horas * 60;
    return (minutosHoras + minutos);
}

int main(int argc, char **argv) {
    int horas, min;
    printf("Digite a hora e os munitos atuais: \n");
    scanf("%d %d", &horas, &min);
    printf("Minutos passados: %d\n", minutos(horas, min));
}