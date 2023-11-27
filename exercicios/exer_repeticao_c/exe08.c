#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair
Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/
int main()
{
    system("cls");

    int op = 0;
    int num1 = 0, num2 = 0;
    int resultado = 0;

    printf("\n1 - Somar\n"
           "2 - Subtrair\n"
           "3 - Multiplicar\n"
           "4 - Dividir\n\n"
           "Informe uma opcao: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1: // soma
        printf("\nInforme o primeiro numero: ");
        scanf("%d", &num1);
        printf("Informe o segundo numero: ");
        scanf("%d", &num2);
        resultado = num1 + num2;
        printf("\nResultado: %d\n\n", resultado);
        break;

    case 2: // subtracao
        printf("\nInforme o primeiro numero: ");
        scanf("%d", &num1);
        printf("Informe o segundo numero: ");
        scanf("%d", &num2);
        resultado = num1 - num2;
        printf("\nResultado: %d\n\n", resultado);
        break;

    case 3: // multiplicacao
        printf("\nInforme o primeiro numero: ");
        scanf("%d", &num1);
        printf("Informe o segundo numero: ");
        scanf("%d", &num2);
        resultado = num1 * num2;
        printf("\nResultado: %d\n\n", resultado);
        break;

    case 4: // divisao
        do
        {
            printf("\nInforme o primeiro numero: ");
            scanf("%d", &num1);

            printf("Informe o segundo numero: ");
            scanf("%d", &num2);

            if (num1 == 0 || num2 == 0)
            {
                printf("\nInforme um numero maior que zero!!!\n");
            }
        } while (num1 == 0 || num2 == 0);

        float resultado = (float)num1 / num2;
        printf("\nResultado: %.2f\n\n", (float)resultado);
        break;

    default:
        printf("Opcao invalida!!");
        break;
    }
}
