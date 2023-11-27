#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
*/
int main()
{
    system("cls");

    int numero, cont_negativo = 0, cont_positivo = 0;

    while (numero < 0 || numero > 0)
    {
        printf("\nInforme um numero: ");
        scanf("%d", &numero);

        if (numero < 0)
        {
            cont_negativo++;
        }
        else
        {
            cont_positivo++;
        }
    }

    printf("\nQuantidade de numeros positivos: %d", cont_positivo);
    printf("\nQuantidade de numeros negativos: %d\n\n", cont_negativo);

    return 0;
}