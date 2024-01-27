#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("cls");

    srand(time(NULL));

    int vet1[25], vet2[25], somavet[25], i;

    for (i = 0; i < 25; i++)
    {
        vet1[i] = 1 + rand() % 100;
        vet2[i] = 1 + rand() % 100;
        somavet[i] = 1 + rand() % 100;
    }

    printf("\n\n");

    // visualizando vet1
    printf("vetor 1\n");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", vet1[i]);
    }
    printf("\n\n");

    // visualizando vet2
    printf("vetor 2\n");
    for (i = 0; i < 25; i++)
    {
        printf("%d ", vet2[i]);
    }
    printf("\n\n");

    // soma vet1, vet2
    // visualizando somavet
    printf("soma dos vetores\n");
    for (i = 0; i < 25; i++)
    {
        somavet[i] = vet1[i] + vet2[i];
        printf("%d ", somavet[i]);
    }
    printf("\n\n");

    return 0;
}