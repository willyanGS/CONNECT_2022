#include <stdio.h>
#include <stdlib.h>

// Exercicio 36 (Lista 1)

int main()
{
    float salario_minimo, salario_funcionario, prop;

    printf("Valor atual do salario minimo: R$ ");
    scanf("%f", &salario_minimo);

    printf("Valor do salario do funcionario: R$ ");
    scanf("%f", &salario_funcionario);

    prop = salario_funcionario/salario_minimo;
    printf("\nO funcionario recebe o equivalente a %.2f salarios minimos\n", prop);

    return 0;
}
