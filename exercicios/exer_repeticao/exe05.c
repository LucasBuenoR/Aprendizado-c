#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float n1, n2, media_semestral;

    printf("\nInforme a nota 1 do aluno: ");
    scanf("%f", &n1);

    printf("\nInforme a nota 2 do aluno: ");
    scanf("%f", &n2);

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
    {
        printf("\nNota invalida!!!\n\n");
    }
    else
    {
        media_semestral = (n1 + n2) / 2;
        printf("\nMedia semestral do aluno eh: %.2f\n\n", media_semestral);
    }

    return 0;
}