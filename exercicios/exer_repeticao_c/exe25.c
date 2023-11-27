#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");
    int X, Y;

    // Solicita a entrada do usuário para os valores de X e Y
    printf("Digite dois valores (X e Y): ");
    scanf("%d %d", &X, &Y);

    // Variável para controlar a contagem
    int contador = 1;

    // Loop para imprimir a sequência
    for (int i = 1; i <= Y; i++) {
        printf("%d ", i);

        // Se o contador atingir o valor de X, passa para a próxima linha
        if (contador == X) {
            printf("\n");
            contador = 0; // Reinicia o contador
        }

        contador++;
    }

    return 0;
}