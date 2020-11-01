#include <stdio.h>

int main (int argc, char **argv) {
    int first, second;
    scanf("%d %d", &first, &second);

    if (first > second) {
        printf("%d\n", first);
    } else if (second > first) {
        printf("%d\n", second);
    } else {
        printf("Os numeros são iguais\n");
    }
}
