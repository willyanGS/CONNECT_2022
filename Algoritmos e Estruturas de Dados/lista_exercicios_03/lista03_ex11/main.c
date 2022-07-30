#include <stdio.h>
#include <stdlib.h>

// Exercicio 11 (Lista 3)

#define QTD_NUMEROS 20
#define INTERVALO_MIN 0
#define INTERVALO_MAX 100

int main()
{
    int i, num, cont=0;
    for (i=0; i<QTD_NUMEROS; i++){
        printf("Digite o %d%c numero inteiro: ", i+1, 167);
        scanf("%d", &num);
        if (num>=INTERVALO_MIN && num<=INTERVALO_MAX)
            cont++;
    }
    system("cls");
    printf("\nDos numeros digitados, %d estao entre %d e %d.", cont, INTERVALO_MIN, INTERVALO_MAX);

    printf("\n");
    return 0;
}
