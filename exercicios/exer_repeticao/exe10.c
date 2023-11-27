#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    system("cls");

    double total = 0.01;

    for(int i = 2; i  <= 30; i++)
    {
        total += pow(2, i - 1) * 0.01;  // Dobrando o valor do dia anterior
    }

    printf("Ao final de 30 dias, voce tera: R$%.2lf\n\n", total);

    return 0;
}