#include <stdio.h>
#include <stdlib.h>

// Exercicio 2 (Lista 2)

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("\nO numero %d e ",num);
    printf(((num%2)==0) ? "PAR" : "IMPAR");

    printf("\n");
    return 0;
}
