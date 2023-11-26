#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    // unsigned desconsidera negativos
    // recebe valores >= 0
    unsigned int x = 2147483647;
    
    printf("\n\t%u\n\n", x);

    unsigned short int y = 55000;
    // short int ==> %d ou %hi
    // unsigned short int ==> %hu ou %d
    // unsigned long int ==> %lu

    printf("\n\t%d\n\n", y);

    return 0;
}