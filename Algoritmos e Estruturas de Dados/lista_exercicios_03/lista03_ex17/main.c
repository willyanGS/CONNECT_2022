#include <stdio.h>
#include <stdlib.h>

// Exercicio 17 (Lista 3)

#define PRECO_KG 23.59 // preço (R$) do quilo

int main()
{
    float peso_prato=0.0, bebida=0.0, total=0.0;

    do{
        system("cls");
        printf("=== VoceQueSeServe ===\n");
        printf("\nPESO DO PRATO   (kg) = ");
        scanf("%f", &peso_prato);
        printf("VALOR DA BEBIDA (R$) = ");
        scanf("%f", &bebida);

        total = (bebida+(peso_prato*PRECO_KG));
        printf("-------------------------\n");
        printf("TOTAL DA CONTA = R$ %.2f\n\n", total);
        system("pause");

    } while (total!=0);

    printf("\n");
    return 0;
}
