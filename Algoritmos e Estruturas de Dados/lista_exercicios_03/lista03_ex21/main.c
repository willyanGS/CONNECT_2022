#include <stdio.h>
#include <stdlib.h>

// Exercicio 21 (Lista 3)

#define MESAS_FUMANTES 25 // total de mesas fumantes
#define MESAS_NAO_FUMANTES 25 // total de mesas nao fumantes

int main()
{
    int reservas_nao_fumantes=0, reservas_fumantes=0;

    do {
        int opt=0;
        system("cls");
        printf("NOVA RESERVA:");
        printf("\n\n1 - Mesa para nao fumante");
        if (reservas_nao_fumantes==MESAS_NAO_FUMANTES)
            printf(" (RESERVAS ESGOTADAS)");
        else
            printf(" (Mesas disponiveis = %d)", (MESAS_NAO_FUMANTES-reservas_nao_fumantes));
        printf("\n2 - Mesa para fumante");
        if (reservas_fumantes==MESAS_FUMANTES)
            printf(" (RESERVAS ESGOTADAS)");
        else
            printf(" (Mesas disponiveis = %d)", (MESAS_FUMANTES-reservas_fumantes));

        do {
            printf("\n\n\tOpcao desejada: ");
            scanf("%d", &opt);
            switch (opt){
                case 1:
                    if (reservas_nao_fumantes==MESAS_NAO_FUMANTES){
                        printf("\n\tMESA INDISPONIVEL");
                        printf("\n\t");
                        system("pause");
                    } else if (reservas_nao_fumantes<MESAS_NAO_FUMANTES){
                        printf("\n\tRESERVA CONFIRMADA (Mesa para nao fumante)");
                        reservas_nao_fumantes++;
                        printf("\n\t");
                        system("pause");
                    }
                    break;
                case 2:
                    if (reservas_fumantes==MESAS_FUMANTES){
                        printf("\n\tMESA INDISPONIVEL");
                        printf("\n\t");
                        system("pause");
                    } else if (reservas_fumantes<MESAS_FUMANTES){
                        printf("\n\tRESERVA CONFIRMADA (Mesa para fumante)");
                        reservas_fumantes++;
                        printf("\n\t");
                        system("pause");
                    }
                    break;
                default:
                    printf("\n\tOPCAO INVALIDA");
                    printf("\n\t");
                    system("pause");
            }
        } while (opt!=1 && opt!=2);
    } while ((reservas_nao_fumantes<MESAS_NAO_FUMANTES) || (reservas_fumantes<MESAS_FUMANTES));

    system("cls");
    printf("NOVA RESERVA:");
    printf("\n\n1 - Mesa para nao fumante");
    printf(" (RESERVAS ESGOTADAS)");
    printf("\n2 - Mesa para fumante");
    printf(" (RESERVAS ESGOTADAS)");
    printf("\n\n\tOpcao desejada: (TODAS AS RESERVAS ESGOTADAS)");

    printf("\n");
    return 0;
}
