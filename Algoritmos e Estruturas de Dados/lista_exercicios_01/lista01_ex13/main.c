#include <stdio.h>
#include <stdlib.h>

// Exercicio 13 (Lista 1)

int main()
{
    int num, c, d, u;

    printf("Digite um numero inteiro (com ate 3 digitos): ");
    scanf("%d", &num);
    c = num/100;
    d = (num-c*100)/10;
    u = (num-c*100)%10;

    printf("\n\nCENTENA = %d\nDEZENA  = %d\nUNIDADE = %d\n", c, d, u);

    return 0;
}
