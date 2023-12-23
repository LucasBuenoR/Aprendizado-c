#include <stdlib.h>
#include <stdio.h>
#include <time.h> // usando a hora do computador 

int main()
{
    system("cls");

    int i, j, mat[3][3] = {{10, 23, 39}, {46, 500, 6}, {79, 84, 99}};

    srand(time(NULL)); // passando a semente
   
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat[i][j] = rand(); // gerando numeros aleatorios dentro da matriz
                printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}