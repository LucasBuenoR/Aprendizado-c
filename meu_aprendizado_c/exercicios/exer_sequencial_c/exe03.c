#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a = 1;
    int b = 2;

    a = a ^ b; //operador XOR ^
    b = a ^ b;
    a = a ^ b;

    printf("a: %d\nb: %d ", a, b);

    return 0;
}