#include <stdio.h>

float salarioFinal(float salarioFixo, float totalVendas) {
    float valorImposto = salarioFixo * 0.06;
    float valorComissao = totalVendas * 0.05;
    float deveReceber = (salarioFixo - valorImposto) + valorComissao;
    return deveReceber;
}

int main(int argc, char **argv) {
    float salarioFixo, totalVendas;
    scanf("%f %f", &salarioFixo, &totalVendas);
    float deveReceber = salarioFinal(salarioFixo, totalVendas);
    printf("Receberá no final do mês: %.2f\n", deveReceber);
}