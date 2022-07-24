#include <stdio.h>
#include <stdlib.h>

// Exercicio 32 (Lista 1)

int main()
{
    float peso;

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    printf("\nSeu peso em gramas e = %.0f g\n", peso*1000);

    return 0;
}
