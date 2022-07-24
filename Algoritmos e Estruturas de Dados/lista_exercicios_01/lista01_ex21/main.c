#include <stdio.h>
#include <stdlib.h>

// Exercicio 21 (Lista 1)

int main()
{
    int num_lata, num_600, num_2L;
    float volume_total;

    printf("Digite o numero comprado:\nLATA 350mL = ");
    scanf("%d", &num_lata);
    printf("GARRAFA 600mL = ");
    scanf("%d", &num_600);
    printf("GARRAFA 2 L = ");
    scanf("%d", &num_2L);

    volume_total = ((num_lata*0.35) + (num_600*0.6) + (num_2L*2));
    printf("\nO volume total de refrigerante Meia-Cola comprado foi %.2f L\n", volume_total);

    return 0;
}
