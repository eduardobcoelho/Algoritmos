#include <stdio.h>

int main (int argc, char **argv) {
    
    for (int i = 1; i <= 200; i++) {
        if ((i % 2 == 0) || (i % 5 == 0)){
            printf("%d\n", i);
        }
    }
}