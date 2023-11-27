/*
Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls");

    int qtd_funcionarios = 0;
    double salario = 0, media_salarios = 0, maior_salario = 0, menor_salario = 0, soma_salario = 0;

    printf("\nInforme quantidade de funcionarios: ");
    scanf("%d", &qtd_funcionarios);

    for (int i = 1; i <= qtd_funcionarios; i++)
    {
        printf("\nInforme o salario de cada funcionario: ");
        scanf("%lf", &salario);
        soma_salario += salario;

        // Inicializar maior e menor com o primeiro salario
        if (i == 1)
        {
            maior_salario = menor_salario = salario;
        }

        // Verificar se o salario é maior que o atual maior
        if (salario > maior_salario)
        {
            maior_salario = salario;
        }

        // Verificar se o salario é menor que o atual menor
        if (salario < menor_salario)
        {
            menor_salario = salario;
        }
    }

    media_salarios = (double)soma_salario / qtd_funcionarios;

    printf("\nA media salarial eh: %.3lf\n", media_salarios);
    printf("\nO maior salario informado: %.3lf\n", maior_salario);
    printf("\nO menor salario informado: %.3lf\n\n", menor_salario);

    return 0;
}