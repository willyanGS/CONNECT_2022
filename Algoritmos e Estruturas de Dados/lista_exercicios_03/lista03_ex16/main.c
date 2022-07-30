#include <stdio.h>
#include <stdlib.h>

// Exercicio 16 (Lista 3)

#define _MAX 5 // maximo de produtos na compra

int main()
{
    int qtd[_MAX], i=0;
    float preco[_MAX];
    char condic;

    do { // registro dos produtos
        system("cls");
        printf("===SUPERMERCADO===\n\nPRODUTO %03d ->\nQuantidade = ", i+1);
        scanf("%d", &qtd[i]);
        printf("Preco = R$ ");
        scanf("%f", &preco[i]);
        i++;
        if (i<_MAX){
            printf("\nPROXIMO ITEM (S/N)? ");
            fflush(stdin);
            scanf("%c", &condic);
        } else {
            printf("\nMAXIMO DE ITENS NA COMPRA\n\n");
            system("pause");
        }
    } while (i<_MAX && (condic == 's' || condic == 'S'));

    // resumo final da compra
    system("cls");
    printf("===SUPERMERCADO===\n\nRESUMO DA COMPRA:\n");
    printf("\n----------------------------------------------");
    printf("\n|====Produto====|=Prec.unit=|=Qtd=|=Prec.tot=|");
    printf("\n----------------------------------------------");
    float total=0.0;
    for (int j=0; j<i; j++){
        printf("\n| Produto %03d   |   %6.02f  | %03d |  %6.02f  |", j+1, preco[j], qtd[j], (preco[j]*qtd[j]));
        total+=(preco[j]*qtd[j]);
    }
    printf("\n----------------------------------------------");
    printf("\n                | TOTAL A PAGAR = R$ %6.02f  |", total);

    printf("\n");
    return 0;
}
