#include <stdio.h>
#include <stdlib.h>

// Exercicio 27 (Lista 1)

int main()
{
    float num1, num2, result;

    printf("DIVISAO DE 2 NUMEROS:\nDigite o numerador = ");
    scanf("%f", &num1);
    printf("Digite o denominador (diferente de 0) = ");
    scanf("%f", &num2);

    result = (num1/num2);
    printf("\nResultado da divisao = %.2f\n", result);

    return 0;
}
