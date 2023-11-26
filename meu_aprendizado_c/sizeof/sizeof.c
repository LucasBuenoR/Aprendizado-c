#include <stdio.h>
#include <stdlib.h>

// sizeof e operador short
//  economizando memeria
int main()
{
    system("cls");

    // int y = 0;
    short int x = 32767;

    // printf("Tamanho de um int na memoria: %d bytes\n", sizeof y);
    printf("Valor de x: %d\n", x);
    x++;
    printf("\nValor de x: %hi\n\n", x);

    // 4 * 8 = 32bits

    return 0;
}