#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int valor;

    printf("\nDigite um valor maior que zero: ");
    scanf("%d", &valor);

    // Estrutura enquanto
    while (valor <= 0)
    {
        printf("\nValor invalido! digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("\nValor lido: %d\n\n", valor);

    return 0;
}