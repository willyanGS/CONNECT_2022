#include <stdio.h>
#include <stdlib.h>

// Exercicio 33 (Lista 1)

int main()
{
    float base_maior, base_menor, altura, area_trapezio;

    printf("DIGITE AS DIMENSOES DO TRAPEZIO:\n\tBase maior = ");
    scanf("%f", &base_maior);
    printf("\tBase menor = ");
    scanf("%f", &base_menor);
    printf("\tAltura = ");
    scanf("%f", &altura);

    area_trapezio = (((base_maior+base_menor)*altura)/2);
    printf("\nAREA DO TRAPEZIO = %.2f u.m.%c\n", area_trapezio, 253);

    return 0;
}
