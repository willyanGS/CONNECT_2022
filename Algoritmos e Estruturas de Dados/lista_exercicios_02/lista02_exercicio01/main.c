#include <stdio.h>
#include <stdlib.h>

// Exercicio 1 (Lista 2)

int main()
{
    float A, B;

    printf("Digite um valor: ");
    scanf("%f", &A);
    printf("Digite outro valor: ");
    scanf("%f", &B);

    printf("\n\nO maior valor e: ");
    if (A>B)
        printf("%.2f", A);
    else
        printf("%.2f", B);
    printf("\n");
    return 0;
}
