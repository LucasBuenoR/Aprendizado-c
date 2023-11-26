#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int valor, valor2;

    printf("\nDigite um valor maior que zero: ");
    scanf("%d", &valor);

    // Estrutura enquanto
    while (valor <= 0)
    {
        printf("\nValor invalido! digite um valor maior que zero: ");
        scanf("%d", &valor);
    }

    printf("\nValor lido: %d\n\n", valor);

    // Estrutura do while
    do
    {
        printf("Digite um valor maior que zero: ");
        scanf("%d", &valor2);

    } while (valor2 <= 0);

    printf("\nValor lido: %d\n\n", valor2);

    return 0;
}