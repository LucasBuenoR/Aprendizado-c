#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    //float x = 3.1415;
    // precisao simples

    long double y = 3.14155896587458962548;
    // precisao dupla
    // double => %lf
    // long double => %Lf
    
    //printf("Valor de y: %Lf\n", y);

    __mingw_printf("Valor de y: %.15Lf\n", y);

    printf("Um double precisa de %d bytes de memoria.\n\n", sizeof y);

    return 0;
}