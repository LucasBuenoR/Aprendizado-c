#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int i, soma = 0;

    for (i = 1; i <= 500; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
            // soma = soma + i;
        }
    }

    printf("Soma dos numeros Impares ate 500: %d\n\n", soma);
}