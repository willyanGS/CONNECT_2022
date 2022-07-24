#include <stdio.h>
#include <stdlib.h>

// Exercicio 13 (Lista 2)

int main()
{
    float valor, valorResto;
    printf("Digite o valor: R$ ");
    scanf("%f", &valor);
    valorResto = valor;

    int notas100=0, notas50=0, notas10=0, notas5=0, notas1=0;

    if (valorResto>=100)
        notas100 = (int)(valorResto/100);
    valorResto = (valorResto-(notas100*100.00));

    if (valorResto<100 && valorResto>=50)
        notas50 = (int)(valorResto/50);
    valorResto = (valorResto-(notas50*50.00));

    if (valorResto<50 && valorResto>=10)
        notas10 = (int)(valorResto/10);
    valorResto = (valorResto-(notas10*10.00));

    if (valorResto<10 && valorResto>=5)
        notas5 = (int)(valorResto/5);
    valorResto = (valorResto-(notas5*5.00));

    if (valorResto<5 && valorResto>=1)
        notas1 = (int)(valorResto/1);

    printf("\nO Valor R$ %.2f necessita de:\n", valor);
    printf("\n\t%d NOTAS de R$ 100,00", notas100);
    printf("\n\t%d NOTAS de R$ 50,00", notas50);
    printf("\n\t%d NOTAS de R$ 10,00", notas10);
    printf("\n\t%d NOTAS de R$ 5,00", notas5);
    printf("\n\t%d NOTAS de R$ 1,00", notas1);

    printf("\n");
    return 0;
}
