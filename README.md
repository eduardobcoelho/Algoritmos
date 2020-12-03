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

# Gerenciamento de memória

## Introdução

* Através de ponteiros podemos indical qual endereço usar
* E se quisermos usar mais memória? Um endereço que não seja de uma variável definida no programa.

## Partes de uma memória

* text: código do programa;
* data: variáveis globais inicializadas;
* bss: variáveis globais não inicializadas;
* stack: pilha de dados locais;
* heap: área alocada dinamicamente;
* O heap e a pilha crescem em direções opostar na memória, logo, se uma encostar na outra, o programa fica sem memória disponível.

## Funções de gerenciamento

* malloc: aloca memória e retorna um ponteiro com o primeiro endereço dessa memória;
* calloc: aloca e inicia com zeros;
* realloc: redimenciona tamanho de memória alocada;
* free: libera espaço alocado;
* Biblioteca stdlib.h

### malloc

* Retorna um ponteiro para uma área de memória;
    * NULL se não houver memória suficiente.
* Devemos passar a quantidade de memória a ser alocada, em bytes;
* Memória alocada na heap.
* Exemplo:
    int *numeros;
    int quantidade;
    numeros = (int*) malloc(sizeof(int) * quantidade);
* Exemplo 02:
    int main(int argc, char **argv) {
        int *numeros, quantidade, i;
        scanf("%d", &quantidade);
        numeros = (int*) malloc(sizeof(int) * quantidade);

        if(numeros == NULL) {

        }
        for (i = 0; i < quantidade; i++) {
            scanf("%d", &numeros[i]);
        }
        for (i = 0; i < quantidade; i++) {
            printf("%d\n", numeros[i]);
        }
        free(numeros);
        return 0;
    }

### free

* Depois que utilizarmos a memória alocada, devemos liberar o espaço para novas alocações;
* Não usar área liberada;
* Não usar área fora da área alocada.

### calloc

* Mesma função do malloc;
* Coloca zeros (0) em toda a área alocada;
* Após seu uso também devemos liberar área;
* Dois parâmetros:
    * Quantos elementos deseja alocar;
    * O tamanho, em bytes, de cada elemento;
* Exemplo:
    void * calloc(size_t quantidade, size_t tamanho);

### realloc

* Redimensiona uma área de memória para um novo tamanho:
    void * realloc(void *ptr, size_t size);
* O retorno de realloc é um ponteiro para a área redimensionada.
* Nova área pode começar em endereço diferente do original;

### Retorno de função

* Exemplo 01:
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    int *impares(int *a, int tamanho, int *qtdImpares) {
        int i, j = 0, qtdI = 0, *impares;
        for(i = 0; i < tamanho; i++) {
            if(a[i] % 2 != 0) {
                qtdI++;
            }
        }
        impares = (int*)malloc(sizeof(int)*tamanho);
        for(i = 0; i < tamanho; i++) {
            if (a[i] % 2 != 0) {
                impares[j] = a[i];
                j++;
            }
        }
        *qtdImpares = qtdI;
        return impares;
    }

    int main(int argc, char **argv) {
        int i, tamanho, *numeros, *imp, qtdI;
        scanf("%d", &tamanho);

        numeros = (int*)malloc(sizeof(int)*tamanho);

        for(i = 0; i < tamanho; i++) {
            scanf("%d", &numeros[i]);
        }

        imp = impares(numeros, tamanho, &qtdI);

        printf("%d\n", *imp);
        printf("%p\n", imp);

        free(numeros);
        free(imp);

        return 0;
    }

* Exemplo 02:
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *removeAreaNaoUsada(char *s) {
    char *enderecoNovo, *enderecoOrigem, *enderecoDestino;
    enderecoNovo = (char*)malloc(sizeof(char)*(strlen(s)+1));
    enderecoOrigem = s;
    enderecoDestino = enderecoNovo;
    while(*enderecoOrigem != '\0') {
        *enderecoDestino=*enderecoOrigem;
        enderecoDestino++;
        enderecoOrigem++;
    }
    *enderecoDestino=*enderecoNovo;
    return enderecoNovo;
}

int main(int argc, char **argv) {
    char *s, *aux;
    scanf("%[^\n]", s);
    aux = s;
    aux = removeAreaNaoUsada(s);
    free(aux);
    return 0;
}
