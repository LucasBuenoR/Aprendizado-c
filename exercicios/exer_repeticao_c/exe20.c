/*
Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O 
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com 
grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o 
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro 
anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");
    // Número de casas no tabuleiro de xadrez
    int totalCasas = 64;
    
    // Inicializando a quantidade de grãos no primeiro quadro
    long long graosNoQuadro = 1;
    
    // Inicializando o total de grãos
    long long totalGraos = 0;
    
    // Iterando sobre cada quadro
    for (int i = 0; i < totalCasas; ++i) {
        // Adicionando a quantidade de grãos no quadro atual ao total
        totalGraos += graosNoQuadro;
        
        // Dobrando a quantidade de grãos para o próximo quadro
        graosNoQuadro *= 2;
    }
    
    // Imprimindo o resultado
    printf("O monge recebeu um total de %lld graos de trigo.\n\n", totalGraos);

    return 0;
}