/*
Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a, b, c;

    printf("\nInforme o tamanho de um lado do triangulo: ");
    scanf("%d", &a);
    printf("\nInforme o tamanho de um lado do triangulo: ");
    scanf("%d", &b);
    printf("\nInforme o tamanho de um lado do triangulo: ");
    scanf("%d", &c);

    if (a < 0 || b < 0 || c < 0)
    {
        printf("\nNao eh um triangulo!!!\n\n");
    }
    else if (a == b && b == c && a == c)
    {
        printf("\nEquilatero!!!\n\n"); // Equilátero: Todos os lados são iguais em comprimento.
    }
    else if (a == b || b == c || a == c)
    {
        printf("\nIsosceles!!!\n\n"); // Isósceles: Dois lados têm o mesmo comprimento.
    }
    else
    {
        printf("\nEscaleno!!!\n\n"); // Escaleno: Todos os lados têm comprimentos diferentes.
    }

    return 0;
}