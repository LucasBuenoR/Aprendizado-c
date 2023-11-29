#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("cls");
    
    double massa_inicial = 0;
    int tempo = 0;

    printf("\nInforme a massa do material em gramas: ");
    scanf("%lf", &massa_inicial);

    while (massa_inicial >= 0.05) {
        massa_inicial /= 2.0;  // Reduzir pela metade a cada iteração
        tempo += 50;  // Incrementar o tempo em 50 segundos a cada iteração
    }

    // Exibir o tempo necessário
    printf("Tempo necessario para a massa se tornar menor que 0,05 gramas: %d segundos\n\n", tempo);

    return 0;




}