#include <stdio.h>

int exercicio9()
{
    int a, b, c;
    printf("\nDigite o numero inteiro (A):");
    scanf("%d", &a);
    printf("\nDigite o numero inteiro (B):");
    scanf("%d", &b);
    printf("\nDigite o numero inteiro (C):");
    scanf("%d", &c);

    if( (a>=b) && (a>=c) ) {
        if (b>=c)
            printf("[ %d ; %d ; %d ]", c, b, a);
        else
            printf("[ %d ; %d ; %d ]", b, c, a);
    }
    else if( (b>=a) && (b>=c) ) {
        if (a>=c)
            printf("[ %d ; %d ; %d ]", c, a, b);
        else
            printf("[ %d ; %d ; %d ]", a, c, b);
    }
    else if( (c>=a) && (c>=b) ) {
        if (b>=a)
            printf("[ %d ; %d ; %d ]", a, b, c);
        else
            printf("[ %d ; %d ; %d ]", b, a, c);
    }

    printf("\n");
    return 0;
}

