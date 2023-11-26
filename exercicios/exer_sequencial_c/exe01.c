#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("\n==>Digite seu sexo [f, F, m, M]: ");
    sexo = getchar();

    printf("\n==>Digite sua idade: ");
    scanf("%d", &idade);

    printf("\n==>Digite seu peso: ");
    scanf("%f", &peso);

    printf("\n==>Digite sua altura: ");
    scanf("%f", &altura);

    printf("\nLeitura concluida\n==>sexo: %c\n==>idade: %d\n==>peso: %.2f\n==>altura: %.2f", sexo, idade, peso, altura);
    
    return 0;
}
