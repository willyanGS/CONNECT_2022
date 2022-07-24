#include <stdio.h>
#include <stdlib.h>

// Exercicio 35 (Lista 1)

int main()
{
    float diagonal_maior, diagonal_menor, area_losango;

    printf("DIGITE AS DIMENSOES DO LOSANGO:\n\tDiagonal maior = ");
    scanf("%f", &diagonal_maior);
    printf("\tDiagonal menor = ");
    scanf("%f", &diagonal_menor);

    area_losango = ((diagonal_maior+diagonal_menor)/2);
    printf("\nAREA DO LOSANGO = %.2f u.m.%c\n", area_losango, 253);

    return 0;
}
