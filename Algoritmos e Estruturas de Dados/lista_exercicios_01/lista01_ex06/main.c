#include <stdio.h>
#include <stdlib.h>

// Exercicio 6 (Lista 1)

int main()
{
    float peso, quilo=12.00;

    printf("\n\tRESTAURANTE BEM-BAO\n\nPeso do prato (kg): ");
    scanf("%f", &peso);
    printf("\n\nValor a pagar: R$ %.2f\n\n\n\tObrigado\(a\), bom apetite!!!\n\n", (peso*quilo));

    return 0;
}
