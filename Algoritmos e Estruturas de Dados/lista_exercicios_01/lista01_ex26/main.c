#include <stdio.h>
#include <stdlib.h>

// Exercicio 26 (Lista 1)

int main()
{
    float num1, num2, num3, result;

    printf("MULTIPLICACAO DE 3 NUMEROS:\nDigite o primeiro numero = ");
    scanf("%f", &num1);
    printf("Digite o segundo numero = ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero = ");
    scanf("%f", &num3);

    result = (num1*num2*num3);
    printf("\nResultado da multiplicacao = %.2f\n", result);

    return 0;
}
