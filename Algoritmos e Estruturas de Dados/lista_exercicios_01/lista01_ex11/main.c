#include <stdio.h>
#include <stdlib.h>

// Exercicio 11 (Lista 1)

int main()
{
    int dias_acidente, ano, mes, dia;

    printf("Quantos dias estamos sem acidentes? R: ");
    scanf("%d", &dias_acidente);
    ano = (dias_acidente/360); //Considerando 1 ano = 12 x 30 dias = 360 dias
    mes = ((dias_acidente-(ano*360))/30);
    dia = ((dias_acidente-(ano*360))%30);

    printf("\n\n Estamos ha %d anos, %d meses e %d dias sem acidentes.\n", ano, mes, dia);

    return 0;
}
