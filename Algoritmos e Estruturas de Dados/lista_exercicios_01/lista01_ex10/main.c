#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercicio 10 (Lista 1)

int main()
{
    float x1, y1, x2, y2, dist;

    printf("Informe as coordenadas do primeiro ponto:\n\tX = ");
    scanf("%f", &x1);
    printf("\tY = ");
    scanf("%f", &y1);
    printf("\nInforme as coordenadas do segundo ponto:\n\tX = ");
    scanf("%f", &x2);
    printf("\tY = ");
    scanf("%f", &y2);

    dist = sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
    printf("\n\nA distancia entre esses dois pontos e %.4f\n", dist);

    return 0;
}
