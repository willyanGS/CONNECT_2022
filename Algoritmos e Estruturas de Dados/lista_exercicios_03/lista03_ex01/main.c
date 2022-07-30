#include <stdio.h>
#include <stdlib.h>

// Exercicio 1 (Lista 3)

int main()
{
    int i=0;
    for (i=1; i<=20; i++){
        printf("Esta e a mensagem %2d\n", i);
        usleep(150*1000);
    }

    printf("\n");
    return 0;
}
