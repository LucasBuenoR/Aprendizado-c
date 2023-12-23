#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("cls");

    int linha, coluna, mat[3][3];

    for (linha = 0; linha < 3; linha++) // inserindo valores na matriz
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("Digite o valor linha[%d] e coluna[%d]:", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
        }
    }

    printf("\n");

    for (linha = 0; linha < 3; linha++) // imprimindo matriz
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            printf("%d ", mat[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}