#include <stdio.h>
#include <stdlib.h>

// Exercicio 9 (Lista 3)

#define QTD_NUMEROS 20
#define MAIORES_QUE 8

int main()
{
    int i, num, maiores=0;
    for (i=0; i<QTD_NUMEROS; i++){
        printf("Digite o %d%c numero inteiro: ", i+1, 167);
        scanf("%d", &num);
        if (num>8)
            maiores++;
    }
    system("cls");
    printf("\nDos numeros digitados, %d sao maiores que %d\n", maiores, MAIORES_QUE);

    printf("\n");
    return 0;
}
