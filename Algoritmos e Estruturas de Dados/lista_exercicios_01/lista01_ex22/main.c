#include <stdio.h>
#include <stdlib.h>

// Exercicio 22 (Lista 1)

int main()
{
    int cent1, cent5, cent10, cent25, cent50, real; // Quantidade de cada moeda

    printf("Digite o total de moedas de:\n01 Centavo  = ");
    scanf("%d", &cent1);
    printf("05 Centavos = ");
    scanf("%d", &cent5);
    printf("10 Centavos = ");
    scanf("%d", &cent10);
    printf("25 Centavos = ");
    scanf("%d", &cent25);
    printf("50 Centavos = ");
    scanf("%d", &cent50);
    printf("01 Real = ");
    scanf("%d", &real);

    float total_reais;
    total_reais = (cent1*0.01 + cent5*0.05 + cent10*0.10 + cent25*0.25 + cent50*0.50 + real);
    printf("\nVoce poupou R$ %.2f \n", total_reais);

    return 0;
}
