#include <stdio.h>
#include <stdlib.h>

int main()
{
    // estrutura de repeticao - for
    system("cls");

    int i;
    // condicao de inicio; condicao de parada; incremento++
    // decremento--
    printf("\n");

    for (i = 1; i <= 100; i+=2) // i = i + 2
    {
        // if (i % 2 != 0) // imprimindo numeros impares
        // {
            printf("%d\n", i);
        // }
    }

    printf("\n");

    return 0;
}