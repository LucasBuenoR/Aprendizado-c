#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("\nDigite um caracter: ");
    letra = fgetc(stdin);//fgetc usado para leituras de arquivos

    printf("Caracter lido: %c\n", letra);

}