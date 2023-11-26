#include <stdio.h>
#include <stdlib.h>

int main()
{
    // decisão completa

    system("cls");

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    //printf("\nResultado logico: %d\n", a < 0);

    if (a < 0)
    {
        printf("\nValor Negativo!\n");
    }

    else
    {
        printf("\nValor positivo ou igual a zero\n");
    }

    printf("\nContinuacao do programa!\n\n");

    return 0;
}