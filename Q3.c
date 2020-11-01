#include <stdio.h>

int main (int argc, char **argv) {
    int first, second;
    scanf("%d %d", &first, &second);

    if (first == second) {
        printf("%d = %d\n", first, second);
    } else {
        printf("%d != %d\n", first, second);
    }
}