#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int valor = 0;

    do
    {
        printf("\nInforme a senha: ");
        scanf("%d", &valor);

        if (valor != 123456)
        {
            printf("\nSenha invalida!!!\n");
        }

    } while (valor != 123456);

    printf("\nAcesso Liberado!!!\n\n");

    return 0;
}