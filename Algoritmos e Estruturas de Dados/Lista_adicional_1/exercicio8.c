#include <stdio.h>

int exercicio8()
{
    int a;
    printf("Digite um numero inteiro:");
    scanf("%d", &a);

    if( (a%2 == 0) && (a<100) )
        printf("O numero e par e menor que 100\n");
    else if( (a%2 == 0) && (a>=100) )
        printf("O numero e par e maior ou igual a 100\n");

    if( (a%2 != 0) && (a<100) )
        printf("O numero e impar e menor que 100\n");
    else if ( (a%2 != 0) && (a>=100) )
        printf("O numero e impar e maior que 100\n");

    printf("\n");
    return 0;
}
