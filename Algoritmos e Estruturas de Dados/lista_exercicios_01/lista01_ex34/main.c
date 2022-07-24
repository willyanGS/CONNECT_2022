#include <stdio.h>
#include <stdlib.h>

// Exercicio 34 (Lista 1)

int main()
{
    float lado, area_quadrado;

    printf("DIGITE AS DIMENSOES DO QUADRADO:\n\tLado = ");
    scanf("%f", &lado);

    area_quadrado = (lado*lado);
    printf("\nAREA DO QUADRADO = %.2f u.m.%c\n", area_quadrado, 253);

    return 0;
}
