#include <stdio.h>
#include <stdlib.h>

// Exercicio 4 (Lista 2)

int main()
{
    float num, result;

    printf("Digite um numero real qualquer: ");
    scanf("%f", &num);

    (num>=0) ? (result = num*2) : (result = num*3);

    printf("\nRESULTADO = %.4f\n", result);

    return 0;
}
