#include <stdio.h>
#include <stdlib.h>

int main() {
    
    system("cls");

    int i, j;

    // Loop externo para I de 1 a 9
    for (i = 1; i <= 9; i += 2) {
        // Loop interno para J começando de 7 e decrementando de 1 em 1
        for (j = 7; j >= 5; j--) {
            printf("I=%d J=%d\n", i, j);
        }
    }

    return 0;
}