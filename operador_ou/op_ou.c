#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int idade = 0;

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 5 || idade >= 60)
    {
        printf("\nTem direito a gratuidade!\n\n");
    }

    else
    {
        printf("\nNao tem direito a gratuidade!\n\n");
    }

    return 0;
}