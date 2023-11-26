#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    // especificador long long int = %lld ou %lli
    // especificador long int = %ld ou %li
    long int x = 2147483647;

    printf("Tamanho de x em bytes: %d\n\n", sizeof x);

    printf("Valor de x: %ld\n", x);
    x++;
    printf("Valor de x: %ld\n", x);

    return 0;
}