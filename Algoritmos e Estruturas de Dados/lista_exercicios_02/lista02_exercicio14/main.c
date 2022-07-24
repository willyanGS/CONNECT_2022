#include <stdio.h>
#include <stdlib.h>

// Exercicio 14 (Lista 2)

#define TAXA_ANTES_1990 0.01 // = 1%
#define TAXA_DEPOIS_1990 0.015 // = 1,5%

int main()
{
    int ano_veiculo;
    float valor_veiculo, taxa;

    printf("Valor de tabela do veiculo = R$ ");
    scanf("%f", &valor_veiculo);
    printf("Ano do veiculo = ");
    scanf("%d", &ano_veiculo);

    (ano_veiculo>=1990) ? (taxa=(valor_veiculo*TAXA_DEPOIS_1990)) : (taxa=(valor_veiculo*TAXA_ANTES_1990));
    printf("\nTaxa de imposto a ser paga ao DETRAN = R$ %.2f", taxa);

    printf("\n");
    return 0;
}
