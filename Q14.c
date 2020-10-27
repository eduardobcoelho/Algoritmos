#include <stdio.h> 

int main(int argc, char **argv) {
    int numeroJoao;
    scanf("%d", &numeroJoao);
    printf("%d%d%d%d\n", (numeroJoao % 10), ((numeroJoao % 100) / 10), ((numeroJoao % 1000) / 100), (numeroJoao / 1000));
}