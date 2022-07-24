#include <stdio.h>
#include <stdlib.h>

// Exercicio 37 (Lista 2)

int main()
{
    int num;

    printf("\tTABUADA\nDigite um numero inteiro: ");
    scanf("%d", &num);

    for (int i=0; i<11; i++) {
        printf("\n%02d * %02d = %02d", num, i, (num*i));
    }

    printf("\n");
    return 0;
}
