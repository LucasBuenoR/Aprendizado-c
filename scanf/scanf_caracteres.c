#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tipo char - caracteres
    char sexo;

    //printf("Valor da variavel sexo: %c", sexo);

    printf("\nDigite seu sexo (f, F, m, M): ");
    scanf("%c", &sexo);

    printf("\nValor da variavel sexo: %c\n\n", sexo);

    return 0;
}