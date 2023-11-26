#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int op = 0;
    // alterar para char

    // inves de numeros posso usar caracteres
    printf("[1] Cadastrar produto\n"
           "[2] Vender produto\n"
           "[3] Buscar produto\n"
           "[4] Imprimir relatorio\n"
           "[5] Sair\n"
           "\nEscolha uma opcao: ");
    scanf("%d", &op);
    // alterar para %c

    // estrutura switch case

    // estrutura switch case com caracteres

    /* 
    envolver o caracter com aspas ' ' 'a'
    se nao o computador entende que o caracter
    é uma variavel
    */
    switch (op)
    {
    case 1:
        printf("\nCadastrando novo produto.\n\n");
        break;
    case 2:
        printf("\nVendendo um novo produto.\n\n");
        break;
    case 3:
        printf("\nBuscando novo produto.\n\n");
        break;
    case 4:
        printf("\nImprimindo relatorio.\n\n");
        break;
    case 5:
        printf("\nSaindo...\n\n");
        break;
    default:
        printf("\nOpcao Invalida!!!\n\n");
    }

    return 0;
}