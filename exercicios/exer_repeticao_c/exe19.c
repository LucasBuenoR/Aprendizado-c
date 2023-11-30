#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    
    int x, y;

    while (1) 
    {
        // Lê as coordenadas do ponto
        printf("Digite as coordenadas (X Y): ");
        scanf("%d %d", &x, &y);

        // Verifica se pelo menos uma coordenada é NULA
        if (x == 0 || y == 0) 
        {
            break;
        }

        // Determina o quadrante
        if (x > 0 && y > 0) 
        {
            printf("primeiro\n");
        } 
        else if (x < 0 && y > 0) 
        {
            printf("segundo\n");
        } 
        else if (x < 0 && y < 0) 
        {
            printf("terceiro\n");
        } 
        else if (x > 0 && y < 0) 
        {
            printf("quarto\n");
        }
    }
// & - 
// && - 
    return 0;
}