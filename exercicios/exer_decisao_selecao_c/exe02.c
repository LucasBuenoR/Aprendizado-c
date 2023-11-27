#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n1, n2, n3, n4, n5;
    int conta_negativo = 0, conta_positivo = 0;

    printf("\nInforme o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nInforme o segundo numero: ");
    scanf("%d", &n2);
    printf("\nInforme o terceiro numero: ");
    scanf("%d", &n3);
    printf("\nInforme o quarto numero: ");
    scanf("%d", &n4);
    printf("\nInforme o quinto numero: ");
    scanf("%d", &n5);

    if (n1 < 0)
    {
        conta_negativo++;
    }
    else
    {
        conta_positivo++;
    }

    if (n2 < 0)
    {
        conta_negativo++;
    }
    else
    {
        conta_positivo++;
    }

    if (n3 < 0)
    {
        conta_negativo++;
    }
    else
    {
        conta_positivo++;
    }

    if (n4 < 0)
    {
        conta_negativo++;
    }
    else
    {
        conta_positivo++;
    }

    if (n5 < 0)
    {
        conta_negativo++;
    }
    else
    {
        conta_positivo++;
    }

    printf("\nQuantidade de positivos: %d\n"
           "Quantidade de negativos: %d\n\n",
           conta_positivo, conta_negativo);

    return 0;
}