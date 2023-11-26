#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    //float x = 3.1415;
    // precisao simples

    double y = 3.14155896587458962548;
    // precisao dupla

    printf("Um double precisa de %d bytes de memoria.\n\n", sizeof y);

    return 0;
}