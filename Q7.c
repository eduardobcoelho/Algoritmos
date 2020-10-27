#include <stdio.h>

float novoSalario(float salario){
    float salarioComAumento = (salario + ((salario * 6) / 100.0));  
    return salarioComAumento;
}

int main(int argc, char **argv) {
    float salario;
    scanf("%f", &salario);
    printf("Novo salario: %.2f\n", novoSalario(salario));
}