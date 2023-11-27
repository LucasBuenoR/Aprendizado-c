#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("cls");
    
    int num_alunos = 45;
    int idade, total_idade_menos_170 = 0, cont_menos_170 = 0;
    float altura, total_altura_mais_20 = 0;

    for (int i = 1; i <= num_alunos; i++)
    {
        printf("Informe a idade do aluno %d: ", i);
        scanf("%d", &idade);

        printf("Informe a altura do aluno %d (em metros): ", i);
        scanf("%f", &altura);

        // a) Idade média dos alunos com menos de 1,70m de altura
        if (altura < 1.70)
        {
            total_idade_menos_170 += idade;
            cont_menos_170++;
        }

        // b) Altura média dos alunos com mais de 20 anos
        if (idade > 20)
        {
            total_altura_mais_20 += altura;
        }
    }

    // Calcular as médias
    float media_idade_menos_170 = (cont_menos_170 > 0) ? (float)total_idade_menos_170 / cont_menos_170 : 0;
    float media_altura_mais_20 = (cont_menos_170 > 0) ? total_altura_mais_20 / cont_menos_170 : 0;

    // Exibir os resultados
    printf("\nA idade média dos alunos com menos de 1,70m de altura é: %.2f anos\n", media_idade_menos_170);
    printf("A altura média dos alunos com mais de 20 anos é: %.2f metros\n", media_altura_mais_20);

    return 0;
}