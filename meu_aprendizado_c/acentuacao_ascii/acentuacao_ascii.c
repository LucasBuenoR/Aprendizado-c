#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
// resolvendo o problema de acentuacao
int main()
{
    system("cls");

    printf("%s\n", setlocale(LC_ALL, ""));
    // ==> setlocale(LC_ALL, NULL); padrao da linguagem C
    // ==> setlocale(LC_ALL, ""); padrao de sistemas operacionais
    // ==> setlocale(LC_ALL, "Portuguese"); portugues brasileiro
    wprintf(L"Coração\n\n"); // TIVE QUE USAR O WPRINTF

    return 0;
}