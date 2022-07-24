#include <stdio.h>
#include <stdlib.h>

// Exercicio 25 (Lista 1)

int main()
{
    float diam, alt, volume;

    printf("Digite as dimensoes da caixa dagua:\n\tDIAMETRO (m) = ");
    scanf("%f", &diam);
    printf("\tALTURA (m)   = ");
    scanf("%f", &alt);

    volume = ((((diam*diam)/4)*3.1415)*alt);
    printf("\t-----------------------------\n\tVOLUME = %.2f m3 ou %.2f L\n", volume, volume*1000);

    return 0;
}
