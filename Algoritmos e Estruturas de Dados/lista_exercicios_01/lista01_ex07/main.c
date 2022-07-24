#include <stdio.h>
#include <stdlib.h>

// Exercicio 7 (Lista 1)

int main()
{
    int dia, mes;

    printf("Que dia e hoje? R: ");
    scanf("%d", &dia);
    printf("De qual mes (numerico)? R: ");
    scanf("%d", &mes);
    printf("\n\nJa se passaram %d dias desde o inicio do ano.\n\n", ((mes-1)*30+dia)); // considerando 1 ano = 360 dias

    return 0;
}
