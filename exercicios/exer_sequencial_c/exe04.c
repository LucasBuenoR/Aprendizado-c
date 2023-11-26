#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numpessoas;
    float despesa, total, gorjeta;

    printf("\nInforme o valor da despesa: ");
    scanf("%f", &despesa);

    printf("\nInforme o valor da gorjeta(porcentagem): ");
    scanf("%f", &gorjeta);

    printf("\nInforme o numero de pessoas que vai dividir a conta: ");
    scanf("%d", &numpessoas);

    total = despesa + (despesa * (gorjeta / 100));

    float valor_por_pessoa = total / numpessoas;

    printf("\nCada pessoa deve pagar: %.2f\n\n", valor_por_pessoa);

    return 0;
}