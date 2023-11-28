#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Multiplos de 7 entre 1 e 9999
    for (int i = 1; i <= 9999; i++)
    {
        if (i % 7 == 0)
        {
            printf("%4d ", i);
        }
    }
    return 0;
}