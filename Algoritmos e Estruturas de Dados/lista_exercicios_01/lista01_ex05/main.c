#include <stdio.h>
#include <stdlib.h>

// Exercicio 5 (Lista 1)

int main()
{
    float reais, preco, litros;

    printf("Quantos reais voce abasteceu? R$ ");
    scanf("%f", &reais);
    printf("Qual era o preco do litro de gasolina? R$ ");
    scanf("%f", &preco);
    litros = (reais/preco);
    printf("\nVoce abasteceu %.2f litros de gasolina.\n", litros);

    return 0;
}
