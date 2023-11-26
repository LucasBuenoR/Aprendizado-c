#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int idade = 0;
    char sexo;

    printf("\nDigite seu sexo [f] ou [m]: ");
    scanf("%c", &sexo);

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (sexo == 'm' && idade == 18)
    {
        printf("\nAlistamento obrigatorio!\n\n");
    }

    else
    {
        printf("\nDispensado!\n\n");
    }

    return 0;
}