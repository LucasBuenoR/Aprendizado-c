#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float valor_real, valor_dollar;

    printf("\nInforme um valor em R$ reais: ");
    scanf("%f", &valor_real);

    printf("\nFazendo a conversao para $ Dollar...\n\n");

    valor_dollar = valor_real / 5.30;

    printf("Valor em Dollar: $%.2f\n\n", valor_dollar);

    return 0;
}