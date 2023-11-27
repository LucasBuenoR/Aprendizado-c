#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num = 0;
    printf("\nInforme um numero inteiro maior que 2: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("\nNao e primo!\n\n");
    }
    else
    {
        int i;
        int e_primo = 1; // Assumimos que o número é primo até encontrarmos um divisor.

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                e_primo = 0; // Encontramos um divisor, então não é primo.
                break;
            }
        }

        if (e_primo)
        {
            printf("\nE primo!\n\n");
        }
        else
        {
            printf("\nNao e primo!\n\n");
        }
    }

    return 0;
}