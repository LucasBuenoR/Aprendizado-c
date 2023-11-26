#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int num = 0;

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0)
    {
        printf("\nO numero %d eh divisivel por 2, 3 e 5\n\n", num);
    }

    else
    {
        if (num % 2 == 0 && num % 3 == 0)
        {
            printf("\nO numero %d eh divisivel por 2 e 3\n\n", num);
        }
        else if (num % 2 == 0 && num % 5 == 0)
        {
            printf("\nO numero %d eh divisivel por 2 e 5\n\n", num);
        }
        else if (num % 3 == 0 && num % 5 == 0)
        {
            printf("\nO numero %d eh divisivel por 3 e 5\n\n", num);
        }
        else if (num % 2 == 0)
        {
            printf("\nO numero %d eh divisivel por 2\n\n", num);
        }
        else if (num % 3 == 0)
        {
            printf("\nO numero %d eh divisivel por 3\n\n", num);
        }
        else if (num % 5 == 0)
        {
            printf("\nO numero %d eh divisivel por 5\n\n", num);
        }
        else
        {
            printf("\nO numero %d nao eh divisivel por 2, 3, 5\n\n", num);
        }
    }

    return 0;
}

/*
if (num % 2 == 0)
{
    printf("\nO numero %d eh divisivel por 2", num);
}
else if (num % 3 == 0)
{
    printf("\nO numero %d eh divisivel por 3", num);
}
else if (num % 5 == 0)
{
    printf("\nO numero %d eh divisivel por 5", num);
}
else
{
    printf("\nO numero %d nao eh divisivel por 2, 3, 5", num);
}
*/