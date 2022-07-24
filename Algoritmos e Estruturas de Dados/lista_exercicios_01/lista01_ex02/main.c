#include <stdio.h>
#include <stdlib.h>

// Exercicio 2 (Lista 1)

int main()
{
    int cavalos, ferraduras;

    printf("Numero total de cavalos: ");
    scanf("%d", &cavalos);
    ferraduras = (cavalos*4);
    printf("\nVoce precisa comprar %d ferraduras para os cavalos.\n", ferraduras);

    return 0;
}
