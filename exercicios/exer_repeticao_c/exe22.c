/*
 Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários 
para que Zé seja maior que Chico.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    // Altura inicial de Chico e Zé em centímetros
    float alturaChico = 150.0; // 1,50 metros = 150 centímetros
    float alturaZe = 110.0;   // 1,10 metros = 110 centímetros

    // Taxa de crescimento anual em centímetros
    float crescimentoChico = 2.0;
    float crescimentoZe = 3.0;

    // Inicializando o contador de anos
    int anos = 0;

    // Calculando os anos necessários para Zé ser maior que Chico
    while (alturaZe <= alturaChico) {
        alturaChico += crescimentoChico;
        alturaZe += crescimentoZe;
        anos++;
    }

    // Imprimindo o resultado
    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n\n", anos);

    return 0;
}