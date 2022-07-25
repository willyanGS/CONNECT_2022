#include <stdio.h>
#include <stdlib.h>

// Exercicio aula 06

int main()
{

    int opcao = 0;
    float total_conta = 0.0;

    do {
        system("cls");
        printf("      INDECISO LANCHES      ");
        printf("\n----------------------------");
        printf("\nOPCAO |   LANCHE     |  R$  ");
        printf("\n------|--------------|------");
        printf("\n  1   | X-NAO SEI    | 18,50");
        printf("\n  2   | X-TANTO FAZ  | 15,50");
        printf("\n  3   | X-MUITA FOME | 20,50");
        printf("\n  4   | X-POUCA FOME | 12,50");
        printf("\n----------------------------");
        printf("\n  5   | SAIR               ");
        printf("\n----------------------------");
        printf("\n\nEscolha uma opcao: ");

        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("\nVoce escolheu um X-NAO SEI\n\n");
            total_conta = total_conta + 18.50;
            system("pause");
            break;
        case 2:
            printf("\nVoce escolheu um X-TANTO FAZ\n\n");
            total_conta = total_conta + 15.50;
            system("pause");
            break;
        case 3:
            printf("\nVoce escolheu um X-MUITA FOME\n\n");
            total_conta = total_conta + 20.50;
            system("pause");
            break;
        case 4:
            printf("\nVoce escolheu um X-POUCA FOME\n\n");
            total_conta = total_conta + 12.50;
            system("pause");
            break;
        case 5:
            printf("\nTOTAL DO SEU PEDIDO = R$ %.2f\n\t\tBOM APETITE!!!\n\n", total_conta);
            system("pause");
            break;
        default:
            printf("\nOPCAO INVALIDA\n\n");
            system("pause");
        }
    } while (opcao!=5);

    return 0;
}
