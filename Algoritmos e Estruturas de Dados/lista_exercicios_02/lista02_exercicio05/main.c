#include <stdio.h>
#include <stdlib.h>

// Exercicio 5 (Lista 2)

int main()
{
    int num;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    ((num%2)==0) ? (num+=5) : (num+=8);
    printf("\nRESULTADO = %d", num);

    printf("\n");
    return 0;
}
