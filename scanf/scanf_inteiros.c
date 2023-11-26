#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarando minha variável int
    int numero = 0; // inicializando com zero
    int numero2 = 0;

    printf("\n==>Digite um valor inteiro: ");
    scanf("%d", &numero);
    // scanf vai ler um numero inteiro %d

    printf("==>Digite um segundo valor inteiro: ");
    scanf("%d", &numero2);

    printf("\n==>Primeiro valor digitado eh: %d\n", numero);
    printf("\n==>Segundo valor digitado eh: %d\n\n", numero2);
    // Especificador %d representando valores inteiros - int
    return 0;
}