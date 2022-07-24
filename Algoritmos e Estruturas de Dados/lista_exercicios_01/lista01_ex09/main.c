#include <stdio.h>
#include <stdlib.h>

// Exercicio 9 (Lista 1)

int main()
{
    int P, M, G;

    printf("Informe o numero de camisetas vendidas:\n\nTamanho P = ");
    scanf("%d", &P);
    printf("Tamanho M = ");
    scanf("%d", &M);
    printf("Tamanho G = ");
    scanf("%d", &G);

    printf("\n\nValor total arrecadado = R$ %.2f\n\n", (float)(P*10+M*12+G*15));

    return 0;
}
