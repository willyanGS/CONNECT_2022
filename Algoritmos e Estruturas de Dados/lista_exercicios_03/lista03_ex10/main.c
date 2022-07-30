#include <stdio.h>
#include <stdlib.h>

// Exercicio 10 (Lista 3)

#define QTD_NUMEROS 20

int main()
{
    int i, num, pares=0;
    for (i=0; i<QTD_NUMEROS; i++){
        printf("Digite o %d%c numero inteiro: ", i+1, 167);
        scanf("%d", &num);
        if (num%2==0)
            pares++;
    }
    system("cls");
    printf("\nDos numeros digitados, %d sao pares.", pares);

    printf("\n");
    return 0;
}
