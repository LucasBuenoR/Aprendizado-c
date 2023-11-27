/*
Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/

#include <stdio.h>
#include <stdlib.h>

int multiplicarSemOperador(int a, int b) {
    int resultado = 0;

    // Caso um dos números seja negativo, inverte o sinal do resultado
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        a = (a < 0) ? -a : a;
        b = (b < 0) ? -b : b;

        while (a > 0) {
            resultado -= b;
            a--;
        }
    } else if (a < 0 && b < 0) {
        a = -a;
        b = -b;
        while (a > 0) {
            resultado += b;
            a--;
        }
    } else {
        // Ambos os números são positivos
        while (a > 0) {
            resultado += b;
            a--;
        }
    }

    return resultado;
}

int main() {

    system("cls");

    int num1, num2, resultado;

    printf("Digite dois numeros para multiplicar: ");
    scanf("%d %d", &num1, &num2);

    resultado = multiplicarSemOperador(num1, num2);

    printf("O resultado da multiplicacao eh: %d\n\n", resultado);

    return 0;
}