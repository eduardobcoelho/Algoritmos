#include <stdio.h>

int main (int argc, char **argv) {
    int a, b, provisoria;
    scanf("%d %d", &a, &b);

    if (a <= b) {
        printf("%d\n%d\n", a, b);
    } else {
        provisoria = b + 0;
        b = a + 0;
        a = provisoria + 0;

        printf("%d\n%d\n", a, b);
    }
}
