#include <stdio.h>
#include <stdlib.h>

int main()
{
    // decisão simples

    system("cls");

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("\nValor Negativo!\n");
    }
    // else
    printf("\nContinuacao do programa!\n\n");

    return 0;
}