#include <stdio.h>
#include <stdlib.h>

// Exercicio 30 (Lista 1)

#define TAXA_COMISSAO 4 // em %

int main()
{
    float salario, vendas, comissao, salario_total;

    printf("Informe o salario fixo do funcionario: R$ ");
    scanf("%f", &salario);
    printf("Informe o valor total das suas vendas: R$ ");
    scanf("%f", &vendas);

    comissao = (vendas * (TAXA_COMISSAO/100.0));
    salario_total = salario+comissao;

    printf("\nO funcionario recebeu R$ %.2f de comissao, totalizando um salario de R$ %.2f\n", comissao, salario_total);

    return 0;
}
