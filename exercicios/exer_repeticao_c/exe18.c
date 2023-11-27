#include <stdio.h>
#include <stdlib.h>
/*
Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
*/
int main()
{
    system("cls");

    int qnt_habitates = 0, idade = 0, qnt_mulheres_sal_2000 = 0, maior_idade = 0, menor_idade = 0;
    float media_salarial = 0, soma_salarios = 0, salario = 0;
    char sexo;

    printf("\nInforme a quantidade de habitantes: ");
    scanf("%d", &qnt_habitates);

    for (int i = 0; i < qnt_habitates; i++)
    {
        printf("\nInforme idade: ");
        scanf("%d", &idade);

        if (i == 0)
        {
            maior_idade = menor_idade = idade;
        }

        if (idade > maior_idade)
        {
            maior_idade = idade;
        }

        if (idade < menor_idade)
        {
            menor_idade = idade;
        }

        printf("\nInforme sexo(M/F): ");
        scanf(" %c", &sexo);

        printf("\nInforme salario: ");
        scanf("%f", &salario);
        soma_salarios += salario;

        if ((sexo == 'f' || sexo == 'F') && salario <= 2000)
        {
            qnt_mulheres_sal_2000++;
        }

        media_salarial = soma_salarios / qnt_habitates;
    }

    printf("\nA media de salario do grupo eh: %.2f", media_salarial);
    printf("\nA maior e a menor idade do grupo eh: %d %d", maior_idade, menor_idade);
    printf("\nA quantidade de mulheres com salario ate R$2000,00 eh: %d\n\n", qnt_mulheres_sal_2000);

    return 0;
}
