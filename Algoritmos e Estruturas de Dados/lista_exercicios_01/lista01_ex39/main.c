#include <stdio.h>
#include <stdlib.h>

// Exercicio 39 (Lista 1)

#define MULTA_CONTA 1.02 // = acrescimo de 2%

int main()
{
    float salario=1200.00, conta_1=200.00, conta_2=120.00, salario_restante; // em R$

    salario_restante = (salario - ((conta_1+conta_2)*(MULTA_CONTA)));

    printf("\nJoao, restara R$ %.2f do seu salario.\n", salario_restante);

    return 0;
}
