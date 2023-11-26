#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int segundos, segundos_restantes, horas, minutos;

    printf("\nInforme uma quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;

    segundos_restantes = segundos % 3600;

    minutos = segundos_restantes / 60;

    segundos_restantes = segundos_restantes % 60;

    printf("\n%d:%.d:%.d\n\n", horas, minutos, segundos_restantes);
}