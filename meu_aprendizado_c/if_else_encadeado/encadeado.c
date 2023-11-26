#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a = 0;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    // if else encadeados

    if (a < 0)
    {
        printf("\nValor negativo!\n\n");
    }

    else if (a > 0) // if else encadeados
    {
        printf("\nValor positivo!\n\n");
    }

    else
    {
        printf("\nValor igual a zero!\n\n");
    }

    return 0;
}