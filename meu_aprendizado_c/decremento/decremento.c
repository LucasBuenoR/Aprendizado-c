#include <stdio.h>
#include <stdlib.h>

// DECREMENTO --

int main()
{
    system("cls");

    int resultado, contador = 10;

    // Mesmo resultado
    //  contador--;
    //  contador -= 1;
    //  contador = contador - 1;

    resultado = --contador;
    printf("\nValor: %d\n\n", resultado);

    return 0;
}