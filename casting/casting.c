#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a = 10, b = 20;
    float pi = 3.1415;

    a = (int)pi;
    printf("\nValor de a: %d\n", a);
    /*
    Podemos converter valores float para int
    mas perdemos a parte decimal
    */
    printf("\nSoma: %d\n", a + b);
    printf("\nSubtracao: %d\n", a - b);
    printf("\nMultiplicao: %d\n", a * b);
    printf("\nDivisao: %f\n\n", (float)a / b);
    // Fazendo o casting na variavel a de int para float

    return 0;
}