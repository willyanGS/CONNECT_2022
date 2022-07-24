#include <stdio.h>
#include <stdlib.h>

// Exercicio 1 (Lista 1)

int main()
{
    double  A, B;

    printf("Digite as dimensoes do terreno:\n\nLargura (m) = ");
    scanf("%lf", &A);
    printf("Comprimento (m) = ");
    scanf("%lf", &B);
    printf("\n\nArea total do terreno (m2) = %.2lf \n\n", A*B);

    return 0;
}
