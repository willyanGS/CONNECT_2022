#include <stdio.h>
#include <stdlib.h>

// Exercicio 19 (Lista 1)

#define PRECO_ANEL_CHIP 4.00
#define PRECO_ANEL_ALIMENTO 3.50
#define QUANT_ANEL_CHIP 1
#define QUANT_ANEL_ALIMENTO 2

int main()
{
    int frangos;
    float valor_total;

    printf("FRANGOTECH\n\nNumero de frangos na granja: ");
    scanf("%d", &frangos);

    valor_total = (frangos * (PRECO_ANEL_CHIP*QUANT_ANEL_CHIP + PRECO_ANEL_ALIMENTO*QUANT_ANEL_ALIMENTO));
    printf("\nCusto total para marcar os frangos: R$ %.2f\n", valor_total);

    return 0;
}
