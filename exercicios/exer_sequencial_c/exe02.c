#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    system("cls");

    int a, b, A, B;

    printf("\nInforme um valor para 'a': ");
    scanf("%d", &a);

    printf("\nInforme um valor para 'b': ");
    scanf("%d", &b);

    printf("\nInvertendo os valores entre 'a' e 'b'...\n");

    A = b;
    B = a;

    printf("Valor de 'a': %d\nValor de 'b': %d\n\n", A, B);
    
    return 0;
}