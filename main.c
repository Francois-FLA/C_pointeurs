#include <stdio.h>
#include <stdlib.h>

void decoupMinute (int* nombreHeures, int* nombreMinutes);

int main (int argc, char *argv[])
{
    int heures = 0, minutes = 0;

    printf("Veuillez entrer le nombre de minutes a convertir\n");
    scanf("%d", &minutes);

    decoupMinute(&heures, &minutes);
    printf("Il y a donc %d heures et %d minutes\n", heures, minutes);

    return 0;
}

void decoupMinute (int* nombreHeures, int* nombreMinutes)
{
    *nombreHeures = *nombreMinutes / 60;
    *nombreMinutes = *nombreMinutes % 60;
}
