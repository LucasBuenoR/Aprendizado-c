#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int vetor_inicial[10], vetor_quadrado[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Informe um valor para o vetor: ");
        scanf("%d", &vetor_inicial[i]);
    }

    printf("\n");

    // visualizando o vetor inicial
    printf("vetor inicial\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor_inicial[i]);
    }

    printf("\n\n");

    // visualizando o vetor quadrado
    printf("vetor ao quadrado\n");
    for (i = 0; i < 10; i++)
    {
        vetor_quadrado[i] = vetor_inicial[i] * vetor_inicial[i];
        printf("%d ", vetor_quadrado[i]);
    }

    printf("\n\n");

    return 0;
}