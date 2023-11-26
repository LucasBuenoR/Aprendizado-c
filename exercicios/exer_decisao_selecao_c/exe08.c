#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int mes = 0;

    printf("\nInforme um numero: ");
    scanf("%d", &mes);

    /*
    Janeiro: 31 dias
    Fevereiro: 28 dias
    Março: 31 dias
    Abril: 30 dias
    Maio: 31 dias
    Junho: 30 dias
    Julho: 31 dias
    Agosto: 31 dias
    Setembro: 30 dias
    Outubro: 31 dias
    Novembro: 30 dias
    Dezembro: 31 dias
    */

    switch (mes)
    {
    case 1:
        printf("\nJaneiro: 31 dias\n\n");
        break;
    case 2:
        printf("\nFevereiro: 28 dias\n\n");
        break;
    case 3:
        wprintf(L"\nMarço: 31 dias\n\n");
        break;
    case 4:
        printf("\nAbril: 30 dias\n\n");
        break;
    case 5:
        printf("\nMaio: 31 dias\n\n");
        break;
    case 6:
        printf("\nJunho: 30 dias\n\n");
        break;
    case 7:
        printf("\nJulho: 31 dias\n\n");
        break;
    case 8:
        printf("\nAgosto: 31 dias\n\n");
        break;
    case 9:
        printf("\nSetembro: 30 dias\n\n");
        break;
    case 10:
        printf("\nOutubro: 31 dias\n\n");
        break;
    case 11:
        printf("\nNovembro: 30 dias\n\n");
        break;
    case 12:
        printf("\nDezembro: 31 dias\n\n");
        break;

    default:
        printf("\nOpcao invalida!!!\n\n");
    }

    return 0;
}