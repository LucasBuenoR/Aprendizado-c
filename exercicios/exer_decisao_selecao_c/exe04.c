#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float valor_real, valor_dolar;
    int op = 0;

    printf("\nConversao de Moedas\n"
           "[1] - R$Reais para $Dolar\n"
           "[2] - $Dolar para R$Reais\n\n"
           "Escolha uma conversao: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("\nInforme um valor em R$ reais: ");
        scanf("%f", &valor_real);

        printf("\nFazendo a conversao para $ Dolar...\n\n");

        valor_dolar = valor_real / 5.30;

        printf("Valor em Dolar: $%.2f\n\n", valor_dolar);
        break;
    
    case 2:
        printf("\nInforme um valor em $ Dolar: ");
        scanf("%f", &valor_dolar);

        printf("\nFazendo a conversao para R$ Real...\n\n");
        
        valor_real = valor_dolar * 5.30;

        printf("Valor em Reais: $%.2f\n\n", valor_real);
        break;

    default:
        printf("\nOpcao invalida!!!\n\n");
    }

    return 0;
}