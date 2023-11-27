#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    char letra;

    printf("\nInforme uma letra: ");
    letra = getchar();

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        printf("\nEh Vogal!!!\n\n");
    }
    else
    {
        printf("\nNao eh Vogal!!!\n\n");
    }

    return 0;
}