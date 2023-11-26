#include <stdlib.h>
#include <stdio.h>

int main()
{
    char letra;

    printf("\nDigite um caracter: ");
    letra = getc(stdin);
    /*
    passando o stdin no getc para ler entradas
    do teclado
    */

    printf("Caracter lido: %c\n", letra);

    return 0;
}