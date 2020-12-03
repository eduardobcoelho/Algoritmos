# Algoritmos
This repository is turned to my C exercises.
# Ponteiros

## OBSERVAÇÃO: Operador de endereço &

* int a;
* &a = 1606416764;
* Mostrando o endereço:
    %p no printf --> hexadecimal
    %d no printf --> decimal
    printf("Endereço de a: %p\n", &a);

## Definição

* São varáveis cujo conteúdo é um endereço de memória;
* int *px;
* Para acessar o conteúdo de um endereço apontado por uma varável ponteiro precisamos utilizar o operador *(asterisco).

## Aritmética de ponteiros

* Podemos adicionar ou subtrair um ponteiro;
* Se p é um ponteiro para inteiro:
    * p=p+1 fará que p aponte para o endereço do próximo inteiro;
    * um inteiro possui 4 bytes.
* Também pode ser usado para acessar o espaço de memória a partir de uma base;
* *(p+10) acessa o contéudo de 10 espaços a partir de p.
* *p = *(p+1)-*(p+3) --> alterando o valor da variável que contém o endereço apontado por p a partir do momento que está pegando o valor que p+1 está apontando e subtraindo com o valor que p+3 aponta.

## Ponteiros e Arrays

* Arrays e strings
* Arrats (e strings) são ponteiros para o início de uma área contínua de memória;
* O valor entre colchetes é o deslocamento a partir do endereço inicial;
* a[4] é igual a *(a+4);
* considere int a[5]:
    * a e &a --> endereço inicial do array;
    * *(a) e a[0];
    * *(a+2) e a[2];
* Exemplo:
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    int i, a[5], *p;
    for (i = 0; i < 5; i++) {
        a[i] = i * 2;
    }
    p = a; --> adicionamos o primeiro endereço de memória do array ao ponteiro p.
    for (i = 0; i < 5; i++) {
        printf("%d\n", *p); --> printamos o conteúdo que p aponta;
        p++; --> colocamos p para apontar para o próximo endereço.
    }
    return 0;
}

## Ponteiros e strings

* A operação p++ em caso de string vai mudar 1 byte que é o tamanho de um caractere.
* Exemplo:

    #include <stdio.h>
    #include <string.h>

    int main(int argc, char **argv) {
        char nome[30] = "Hellow World!", *p;
        p = nome; --> indica para p o primeiro onde inicia-se o endereço de memoria.
        while(*p != '\0') { --> enquanto o valor que p aponta for diferente de '\0'.
            if(*(p+1) == '\0') { --> se o valor apontado por p+1 é igual a '\0'.
                printf("%c\n", *p);    
                p++; --> pula 1 byte.
            } else {
                printf("%c", *p);
                p++; pula 1 byte.
            }
        }
        return 0;
    }