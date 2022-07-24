#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercicio 40 (Lista 1)

int main()
{
    float cat1, cat2, hip;

    printf("TRIANGULO RETANGULO\nDigite o valor do cateto 1: ");
    scanf("%f", &cat1);
    printf("Digite o valor do cateto 2: ");
    scanf("%f", &cat2);

    hip = sqrt((cat1*cat1)+(cat2*cat2));
    printf("\nA hipotenusa e = %.2f\n", hip);

    return 0;
}
