#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("cls");

    int i, j, mat[3][3] = {{10, 23, 39}, {46, 500, 6}, {79, 84, 99}}, mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, mat2[3][3];

    /*
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                mat[i][j] = mat[i][j] * 2; //mutiplicando a matriz por 2
                    printf("%2d ", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    */
   
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat2[i][j] = mat[i][j] + mat1[i][j]; // somando a matrizes
                printf("%3d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}