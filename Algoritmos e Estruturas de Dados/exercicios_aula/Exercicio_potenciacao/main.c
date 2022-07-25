#include <stdio.h>
#include <stdlib.h>

int main()
{
    int exp;
    double bas, pot=1.0;

    printf("POTENCIACAO\n\nDigite a base: ");
    scanf("%lf", &bas);
    printf("Digite o expoente (num. inteiro): ");
    scanf("%d", &exp);

    for (int i=1; i<=exp; i++) {
        pot = pot * bas;
    }

    printf("\n\nRESULTADO = %.2lf\n", pot);


    return 0;
}
