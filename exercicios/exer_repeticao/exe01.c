#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num, resultado, i;

    printf("\nInforme um numero inteiro de 1 a 10: ");
    scanf("%d", &num);

    printf("\n");

    for (i = 1; i <= 10; i++)
    {
        if (num < 0 || num == 0 || num > 10)
        {
            printf("\nDigite um numero inteiro entre 1 e 10!!!\n\n");
            break;
        }
        
        resultado = num * i;
        printf("%d X %d = %d\n", num, i, resultado);
    }

    printf("\n");

    return 0;
}