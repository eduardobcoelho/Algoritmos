#include <stdio.h>
#include <stdlib.h>
 
typedef struct ListaNumero {
   int numero;
   struct ListaNumero *proximo;
} NO;
 
NO *inserirInicioLE(NO *inicio, int numero){
   NO *novo;
   novo = (NO*) malloc(sizeof(NO));
   novo->numero = numero;
   novo->proximo = inicio;
   inicio = novo;
   return inicio;
}
 
void mostrar(NO *atual){
   while (atual != NULL) {
       printf(" %d\t->\t", atual->numero);
       atual = atual->proximo;
   }
   return;
}
 
void mostrarREC(NO *atual){
   if(atual == NULL) {
       return;
   }
   printf(" %d\t->\t", atual->numero);
   atual = atual->proximo;
   mostrarREC(atual);
}
 
int main () {
   int i;
   NO *inicio=NULL;
   for(i=0;i<5;i++){
       inicio=inserirInicioLE(inicio,i);
   }
   printf("Lista de todos os números cadastrados\n\n");
   mostrar(inicio);
   printf("\n");
   printf("Lista de todos os números cadastrados\n\n");
   mostrarREC(inicio);
}