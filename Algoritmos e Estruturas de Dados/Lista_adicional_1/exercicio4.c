#include <stdio.h>
#include <stdlib.h>

// lista adicional 1

int exercicio4()
{
    // Exercicio 4
    int x, y;
    printf("Valor X = ");
    scanf("%d", &x);
    printf("Valor Y = ");
    scanf("%d", &y);

    x = (x+y);
    y = (x-y);
    x = (x-y);

    printf("\nX = %d\nY = %d", x, y);

    printf("\n");
    return 0;
}
