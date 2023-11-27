#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    int numero = 1;

    while (1) {
        int divisivel = 1;

        // Verifica se o número é divisível por todos os números de 1 a 10
        for (int i = 1; i <= 10; i++) {
            if (numero % i != 0) {
                divisivel = 0;
                break;
            }
        }

        // Se for divisível por todos, encontramos o resultado
        if (divisivel) {
            printf("O menor numero inteiro divisivel por todos os numeros de 1 a 10 eh: %d\n\n", numero);
            break;
        }

        // Se não for divisível por todos, tentamos o próximo número
        numero++;
    }

    return 0;
}