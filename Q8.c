#include <stdio.h>

float novoSalario(float salarioBase){
    float imposto = salarioBase * (7.0/100.0);
    float gratificacao = salarioBase * (5.0/100.0);
    return ((salarioBase + gratificacao) - imposto);
}

int main(int argc, char **argv) {
    float salario;
    printf("Digite seu salario: \n");
    scanf("%f", &salario);
    printf("Novo salário: %.2f\n", novoSalario(salario));
}