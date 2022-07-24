#include <stdio.h>
#include <stdlib.h>

// Exercicio 8 (Lista 2)

int main()
{
    float valor_prod, valor_final;
    char opc=' ';

    printf("Valor do produto R$ ");
    scanf("%f", &valor_prod);

    system("cls");
    printf("\t--------OPCOES DE PAGAMENTO--------");
    printf("\n\tA - a vista (dinheiro ou cheque)   = 10%% de desconto");
    printf("\n\tB - a vista (cartao de credito)    = 15%% de desconto");
    printf("\n\tC - em 2 vezes (cartao de credito) = preco nominal sem juros");
    printf("\n\tD - em 3 vezes (cartao de credito) = preco nominal com 10%% de juros");
    printf("\n\nOPCAO DESEJADA: ");
    fflush(stdin);
    scanf("%c", &opc);

    switch(opc) {
        case 'A':
            valor_final = valor_prod*0.90;
            printf("\nValor a pagar: R$ %.2f", valor_final);
            break;
        case 'B':
            valor_final = valor_prod*0.85;
            printf("\nValor a pagar: R$ %.2f", valor_final);
            break;
        case 'C':
            valor_final = valor_prod;
            printf("\nValor a pagar: (2x) R$ %.2f", valor_final/2);
            printf("\n\t(Valor total: R$ %.2f)", valor_final);
            break;
        case 'D':
            valor_final = (valor_prod*1.10);
            printf("\nValor a pagar: (3x) R$ %.2f", valor_final/3);
            printf("\n\t(Valor total: R$ %.2f)", valor_final);
            break;
        default:
            printf("\nOPCAO INVALIDA");
    }

    printf("\n");
    return 0;
}
