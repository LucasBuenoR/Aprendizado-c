#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + … + n,
onde n é um número inteiro, maior que zero informado pelo usuário.
*/
int main(void)
{
    system("cls");

    int n = 0;

    while (n <= 0)
    {
        printf("\nInforme um valor maior que zero para n: ");
        scanf("%d", &n);
    }
    
    int soma = 0;

    for (int A = 1; A <= n; A++)
    {
        soma+=A;
        printf("%d\t", A);
    }
    printf("\nA soma dos primeiros %d numeros e: %d\n", n, soma);

    return 0;
}