#include <stdio.h>
#include <stdlib.h>


int main() {
    system("cls");
    // Número de linhas desejado
    int linhas = 9;

    // Loop para as linhas
    for (int i = 1; i <= linhas; i++) {
        // Loop para imprimir os asteriscos em cada linha
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Quebra de linha após cada linha
        printf("\n");
    }

    return 0;
}