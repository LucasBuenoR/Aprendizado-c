#include <stdio.h>
#include <stdlib.h>
#include <time.h> // acessando variavel horas do computador 

int main()
{
    system("cls");

    srand(time(NULL)); // passando as horas do computador 

    int num2[40];

    for (int i = 0; i < 40; i++)
    {
        num2[i] = 1 + rand() % 101; // gerando numeros aleatorios
                        // dentro de um intervalo determinado
    }

    printf("\n\n");

    for (int i = 0; i < 40; i++)
    {
        printf("%d ", num2[i]);
    }
    printf("\n\n");

    return 0;
}