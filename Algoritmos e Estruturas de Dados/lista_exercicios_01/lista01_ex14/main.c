#include <stdio.h>
#include <stdlib.h>

// Exercicio 14 (Lista 1)

int main()
{
    float raio;

    printf("Raio da pizza (cm) = ");
    scanf("%f", &raio);
    printf("\n\nA pizza tem Area = %.2f cm2", (raio*raio*3.14));

    printf("\n");
    return 0;
}
