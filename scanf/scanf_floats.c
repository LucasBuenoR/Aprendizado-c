#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero = 3.1415;
    // tipo float ponto flutuante

    printf("\nValor da minha variavel: %.4f", numero);
    // formatando o valor da minha variavel %.2f
    // retorna a quantidade de casas decimais

    printf("\nDigite um valor real: ");
    scanf("%f", &numero);

    printf("Valor lido: %.3f", numero);

    return 0;
}