#include <stdlib.h>
#include <stdio.h>

// usando o getchar para ler caracteres
int main()
{

    char letra;

    printf("\nDigite uma letra: ");
    letra = getchar();
    // funcao getchar() - le um caractere do buffer do teclado
    printf("Caracter lido: %c\n", letra);

    return 0;
}