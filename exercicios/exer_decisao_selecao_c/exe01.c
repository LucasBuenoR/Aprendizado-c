#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a, b, c;

    printf("\nInforme tres valores inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("\nO maior valor digitado eh: %d\n", a);

        if (b < c)
        {
            printf("\nO menor valor digitado eh: %d\n\n", b);
        }
        else
        {
            printf("\nO menor valor digitado eh: %d\n\n", c);
        }
    }

    if (b > a && b > c)
    {
        printf("\nO maior valor digitado eh: %d\n", b);

        if (a < c)
        {
            printf("\nO menor valor digitado eh: %d\n\n", a);
        }
        else
        {
            printf("\nO menor valor digitado eh: %d\n\n", c);
        }
    }

    if (c > a && c > b)
    {
        printf("\nO maior valor digitado eh: %d\n", c);

        if (a < b)
        {
            printf("\nO menor valor digitado eh: %d\n\n", a);
        }
        else
        {
            printf("\nO menor valor digitado eh: %d\n\n", b);
        }
    }

    return 0;
}