#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    // maneiras de declarar vetores
    int num2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // imprimindo com o printf
    // printf("%d ", num2[0]);

    // vetores de caracteres
    char vogais[5] = {'a', 'i', 'e', 'o', 'u'};
    float notas[3] = {7.6, 8.3, 6.7};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num2[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%c ", vogais[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%.2f ", notas[i]);
    }

    return 0;
}