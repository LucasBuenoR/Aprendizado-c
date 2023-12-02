#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    // maneiras de declarar vetores
    int num2[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o elemento da posicao %d: ", i);
        scanf("%d", &num2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        num2[i] = num2[i] * 3;
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num2[i]);
    }
    printf("\n\n");

    return 0;
}