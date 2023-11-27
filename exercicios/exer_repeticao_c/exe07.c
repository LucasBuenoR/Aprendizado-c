#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    int N;

    // Leitura do valor inteiro N
    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    // Apresenta o quadrado de cada valor par de 1 até N
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            int quadrado = i * i;
            printf("O quadrado de %d e %d\n", i, quadrado);
        }
    }

    return 0;
}