#include <stdio.h>

int main(int argc, char **argv) {
    int data;
    printf("Digite uma data no formato ddmmaaaa: ");
    scanf("%d", &data);
    printf("%d do %d de %d\n", (data/1000000), ((data/10000)%100), (data%10000));
}

/* 

    (dd)mmaaaa --> data / 1000000;
    (ddmm)aaaa --> data / 10000 --> dd(mm) --> % 100;
    ddmm(aaaa) --> data % 10000 

*/ 