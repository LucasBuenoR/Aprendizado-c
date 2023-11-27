#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int novoCalculo;

    do
    {
        // Variáveis para armazenar as notas
        float nota1, nota2;

        // Solicita as notas ao usuário
        do
        {
            printf("Digite a nota da primeira avaliacao (entre 0 e 10): ");
            scanf("%f", &nota1);
        } while (nota1 < 0 || nota1 > 10); // Validação da nota1

        do
        {
            printf("Digite a nota da segunda avaliacao (entre 0 e 10): ");
            scanf("%f", &nota2);
        } while (nota2 < 0 || nota2 > 10); // Validação da nota2

        // Calcula a média semestral
        float media = (nota1 + nota2) / 2;

        // Imprime a média
        printf("A media semestral do aluno: %.2f\n", media);

        // Pergunta se deseja fazer um novo cálculo
        printf("Novo calculo? (1-sim 2-nao): ");
        scanf("%d", &novoCalculo);

    } while (novoCalculo == 1);

    return 0;
}