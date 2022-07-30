#include <stdio.h>
#include <stdlib.h>

// Exercicio 12 (Lista 3)

#define QTD_NUMEROS 20
#define INTERVALO_1 0
#define INTERVALO_2 100
#define INTERVALO_3 200

int main()
{
    int i, num, cont1=0, cont2=0, cont3=0;
    for (i=0; i<QTD_NUMEROS; i++){
        printf("Digite o %d%c numero inteiro: ", i+1, 167);
        scanf("%d", &num);
        if (num>=INTERVALO_1 && num<=INTERVALO_2)
            cont1++;
        else if (num>INTERVALO_2 && num<=INTERVALO_3)
            cont2++;
        else if (num>INTERVALO_3)
            cont3++;
    }
    system("cls");
    printf("\nDos numeros digitados:\n\t= %3d estao entre %d e %d.", cont1, INTERVALO_1, INTERVALO_2);
    printf("\n\t= %3d estao entre %d e %d.", cont2, INTERVALO_2+1, INTERVALO_3);
    printf("\n\t= %3d estao acima de %d.", cont3, INTERVALO_3);

    printf("\n");
    return 0;
}
