#include <stdio.h>

int main (int argc, char **argv) {
    int data, mes, ano;
    scanf("%d %d %d", &data, &mes, &ano);

    if (ano >= 0 && ano <= 2020) {

        if (mes == 1 && (data >= 1 && data <= 31)) {
            printf("Data válida\n");
        } else if (mes == 2 && (data >= 1 && data <= 28)) {
            printf("Data válida\n");
        } else if (mes == 3 && (data >= 1 && data <= 31)) {
            printf("Data válida\n");
        } else if (mes == 4 && (data >= 1 && data <= 30)) {
            printf("Data válida\n");
        } else if (mes == 5 && (data >= 1 && data <= 31)) {
            printf("Data válida\n");
        } else if (mes == 6 && (data >= 1 && data <= 30)) {
            printf("Data válida\n");
        } else if (mes == 7 && (data >= 1 && data <= 31)) {
            printf("Data válida\n");
        } else if (mes == 8 && (data >= 1 && data <= 31)) {
            printf("Data válida\n");
        } else if (mes == 9 && (data >= 1 && data <= 30)) {
            printf("Data válida\n");
        } else if (mes == 10 && (data >= 1 && data <= 31)) {
            printf("Data válida\n");
        } else if (mes == 11 && (data >= 1 && data <= 30)) {
            printf("Data válida\n");
        } else if (mes == 12 && (data >= 1 && data <= 31)) {
            printf("Data válida\n");
        } else {
            printf("Data inválida \n");
        }

    } else {
        printf("Data inválida\n");
    }
}
