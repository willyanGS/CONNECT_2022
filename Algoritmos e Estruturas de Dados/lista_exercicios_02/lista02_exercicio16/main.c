#include <stdio.h>
#include <stdlib.h>

// Exercicio 16 (Lista 2)

int main()
{
    float saldo, credito=0.0;

    printf("Digite o saldo medio do ultimo ano: R$ ");
    scanf("%f", &saldo);

    if (saldo>600) {
        credito = saldo*0.40; // = 40%
    } else if (saldo>400) {
        credito = saldo*0.30; // = 30%
    } else if (saldo>200) {
        credito = saldo*0.20; // = 20%
    } else {
        credito = saldo*0.00; // = 0%
    }

    printf("\nSALDO MEDIO DO CLIENTE:            R$ %.2f", saldo);
    printf("\nCREDITO DISPONIVEL PARA O CLIENTE: R$ %.2f", credito);

    printf("\n");
    return 0;
}
