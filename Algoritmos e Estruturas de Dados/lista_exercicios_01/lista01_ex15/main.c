#include <stdio.h>
#include <stdlib.h>

// Exercicio 15 (Lista 1)

int main()
{
    float conta, div, div_resto;

    printf("Valor total da conta = R$ ");
    scanf("%f", &conta);

    div = (int)conta/3;
    div_resto = conta-div*2;

    printf("Valores a pagar:\n\tCARLOS: R$ %.02f\n\tANDRE:  R$ %.2f\n\tFELIPE: R$ %.2f\n", div, div, div_resto);

    return 0;
}
