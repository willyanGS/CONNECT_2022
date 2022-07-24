#include <stdio.h>
#include <stdlib.h>

// Exercicio 3 (Lista 2)

int main()
{
    int A, B;

    printf("Digite um numero inteiro: ");
    scanf("%d", &A);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &B);

    printf("\nRESULTADO ");
    if (A==B)
        printf("(soma): %d", A+B);
    else
        printf("(multiplicacao): %d", A*B);

    printf("\n");
    return 0;
}
