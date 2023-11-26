#include <stdio.h>
#include <stdlib.h>

int main()
{
    //system("cls");
    char a, b;
    /*
        printf("Digite duas letras: ");
        scanf("%c %c", &a, &b);
    */

    printf("\nDigite uma letra: ");
    scanf("%c", &a);

    printf("\nDigite uma letra: ");
    scanf(" %c", &b); // colocar o ESPACO para resolver o problema

    // Limpando o buffer do teclado
    /*
    espacos entre os %c => comando para o computador
    desconsiderar o ENTER, o TAB e o ESPACO
    */
    printf("\nPrimeira letra: %c\nSegunda letra: %c\n", a, b);
    printf(" ");

    return 0;
}