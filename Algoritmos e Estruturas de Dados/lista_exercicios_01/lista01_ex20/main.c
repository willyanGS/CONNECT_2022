#include <stdio.h>
#include <stdlib.h>

// Exercicio 20 (Lista 1)

int main()
{
    int num_blusas, num_novelos;
    float total;

    printf("Quantas blusas de la foram produzidas? ");
    scanf("%d", &num_blusas);
    printf("\nQuantos novelos de la foram gastos? ");
    scanf("%d", &num_novelos);

    total = (float)num_novelos/num_blusas;
    printf("\n\nSao gastos %.1f novelos de la por blusa\n", total);

    return 0;
}
