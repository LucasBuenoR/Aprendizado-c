#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    // nao podemos usar o short e nem o long no float
    float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria.\n\n", sizeof x);

    return 0;
}