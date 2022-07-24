#include <stdio.h>
#include <stdlib.h>

// Exercicio 3 (Lista 1)

int main()
{
    int dia, mes, ano, Nfrances, Nbroa;
    float Pfrances=0.12, Pbroa=1.50, total, poupanca;

    printf("\tPADARIA HOTPAO\n\nINSIRA A DATA (dd/mm/aaaa):\n(dia): ");
    scanf("%d", &dia);
    printf("(mes): ");
    scanf("%d", &mes);
    printf("(ano): ");
    scanf("%d", &ano);
    printf("\nPAES FRANCESES VENDIDOS: ");
    scanf("%d", &Nfrances);
    printf("BROAS VENDIDAS: ");
    scanf("%d", &Nbroa);

    total = ((Nbroa*Pbroa)+(Nfrances*Pfrances));
    poupanca = (total*0.1);
    printf("\n\nNa data %02d/%02d/%d o TOTAL arrecadado foi R$ %.2f", dia, mes, ano, total);
    printf("\n(desse total, R$ %.2f devem ser guardados na poupanca)\n", poupanca);

    return 0;
}
