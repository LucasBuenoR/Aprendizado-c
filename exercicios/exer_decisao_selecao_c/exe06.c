#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main()
{
    system("cls");

    int mes = 0;

    setlocale(LC_ALL, "");

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("\nJaneiro\n\n");
        break;
    case 2:
        printf("\nFevereiro\n\n");
        break;
    case 3:
        wprintf(L"\nMarço\n\n");
        break;
    case 4:
        printf("\nAbril\n\n");
        break;
    case 5:
        printf("\nMaio\n\n");
        break;
    case 6:
        printf("\nJunho\n\n");
        break;
    case 7:
        printf("\nJulho\n\n");
        break;
    case 8:
        printf("\nAgosto\n\n");
        break;
    case 9:
        printf("\nSetembro\n\n");
        break;
    case 10:
        printf("\nOutubro\n\n");
        break;
    case 11:
        printf("\nNovembro\n\n");
        break;
    case 12:
        printf("\nDezembro\n\n");
        break;

    default:
        printf("\nOpcao invalida!!!\n\n");
    }

    return 0;
}