/*
O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h²). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:
IMC                                   Interpretação
Menor que 18,5                         Abaixo do peso
Entre 18,5 e menor que 25              Peso normal
Entre 25 e menor que 30                Sobrepeso
Entre 30 e menor que 35                Obesidade grau 1
Entre 35 e menor que 40                Obesidade grau 2
Maior ou igual a 40                    Obesidade grau 3
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("cls");

    float peso, altura, imc;

    // peso(kg)/altura(metros)^2

    printf("\nInforme sua altura: ");
    scanf("%f", &altura);

    printf("\nInforme seu peso: ");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    if (imc < 18.5)
    {
        printf("\nIMC: %.2f - Abaixo do peso\n\n", imc);
    }
    else if (imc >= 18.5 && imc < 25.0)
    {
        printf("\nIMC: %.2f - Peso normal\n\n", imc);
    }
    else if (imc >= 25.0 && imc < 30)
    {
        printf("\nIMC: %.2f - Sobrepeso\n\n", imc);
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("\nIMC: %.2f - Obesidade Grau 1\n\n", imc);
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("\nIMC: %.2f - Obesidade Grau 2\n\n", imc);
    }
    else
    {
        printf("\nIMC: %.2f - Obesidade Grau 3\n\n", imc);
    }

    return 0;
}