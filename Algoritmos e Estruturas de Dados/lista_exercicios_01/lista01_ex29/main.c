#include <stdio.h>
#include <stdlib.h>

// Exercicio 29 (Lista 1)

#define DESCONTO 10 // em %

int main()
{
    float preco_atual, preco_desconto;

    printf("Preco atual do produto: R$ ");
    scanf("%f", &preco_atual);

    preco_desconto = (preco_atual * ((100.0-DESCONTO)/100));
    printf("\n\nPreco do produto com %d%% de desconto: R$ %.2f\n", DESCONTO, preco_desconto);

    return 0;
}
