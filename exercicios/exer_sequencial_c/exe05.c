#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int dias_trabalhados = 0;
    float valor_bruto, valor_liquido;

    printf("\nInforme o numero de dias trabalhados pelo encanador: ");
    scanf("%d", &dias_trabalhados);

    // R$ 45 por dia
    valor_bruto = 45.00 * dias_trabalhados;

    // desconto de 8%
    valor_liquido = valor_bruto - (valor_bruto * (8.0 / 100.0));

    printf("\nValor a ser pago ao encanador: R$%.2f\n\n", valor_liquido);

    return 0;
}