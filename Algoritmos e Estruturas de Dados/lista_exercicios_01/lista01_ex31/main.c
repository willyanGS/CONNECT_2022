#include <stdio.h>
#include <stdlib.h>

// Exercicio 31 (Lista 1)

int main()
{
    float peso;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("\nSe voce engordar, ficara com %.2f kg", peso*1.15);
    printf("\nSe voce emagrecer, ficara com %.2f kg\n", peso*0.80);

    return 0;
}
