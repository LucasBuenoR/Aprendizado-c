#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("cls");

    int i, j;
    
    int mat0[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; // criando matriz


    //char mat4[2][2] = {'a', 'b', 'c', 'd'};
    
    // imprimindo matriz
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat0[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}