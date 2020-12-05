#include <stdio.h>
#include <string.h>
 
char *meuStrStr(const char *s1, const char *s2) {
   int cont=0, tamanhoStringUm = strlen(s1), tamanhoStringDois = strlen(s2);
   while (*s1 != '\0') {
       if (*s1 == *s2) {
           s1++; s2++;
           cont++;
           while (*s1 == *s2) {
               s1++; s2++;
               cont++;
               if (cont == tamanhoStringDois) {
                   return s1-cont;
               }
           }
       }
       if(cont != 0) {
         s1 -= cont;
       }
       s1++;
       s2 -= (cont);
       cont = 0;
   }
   return NULL;
}
 
int main(int argc, char **argv) {
   char primeraString[20], segundaString[20], *endereco;
   scanf("%[^\n] %[^\n]", primeraString, segundaString);
   endereco = meuStrStr(primeraString, segundaString);
   printf("%p\n", endereco);
   return 0;
}