#include <stdio.h>
#include <stdlib.h>

// Exercicio 12 (Lista 1)

int main()
{
    float salario, salario_aumento;

    printf("Qual o valor do salario? R$ ");
    scanf("%f", &salario);
    salario_aumento = (salario*1.15);
    printf("\nSeu salario inicial (R$ %.2f) foi aumentado para R$ %.2f, resultando em R$ %.2f com descontos(impostos).\n", salario, salario_aumento, (salario_aumento*0.92));

    return 0;
}
