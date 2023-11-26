#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float n1, n2, n3, media;
    char op;

    printf("\n[a] - Aritmetica\n"
           "[p] - Ponderada\n\n");
    printf("Escolha uma opcao: "); op = getchar();

    switch (op)
    {
    case 'a':

        printf("\nInforme a primeira nota: ");
        scanf("%f", &n1);

        printf("\nInforme a primeira nota: ");
        scanf("%f", &n2);

        printf("\nInforme a primeira nota: ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        printf("\nA Media Aritmetica eh: %.2f\n\n", media);

        break;

    case 'p':

        printf("\nInforme a primeira nota: ");
        scanf("%f", &n1);

        printf("\nInforme a primeira nota: ");
        scanf("%f", &n2);

        printf("\nInforme a primeira nota: ");
        scanf("%f", &n3);

        media = ((n1 * 3) + (n2 * 3) + (n3 * 4)) / (3 + 3 + 4);

        printf("\nA Media Ponderada eh: %.2f\n\n", media);

        break;

    default:
        printf("\nOpcao invalida!!!\n\n");
    }

    return 0;
}