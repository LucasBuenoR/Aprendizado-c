#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    // operdor ternario em C condicao ? verdadeiro : falso

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    // operador ternario aninhado
    printf("\n---Operador Ternario---\n");
    a < 0 ? printf("\n\tValor negativo!\n\n") : 
    a > 0 ? printf("\n\tValor positivo!\n\n") : printf("\n\tValor igual a zero\n\n");

/*
    printf("\n---If/else---\n");
    if (a < 0)
    {
        printf("\n\tValor negativo!\n\n");
    }

    else
    {
        printf("\n\tValor positivo ou igual a zero!\n\n");
    }

    printf("Continuacao do programa\n\n");
*/
    return 0;
}