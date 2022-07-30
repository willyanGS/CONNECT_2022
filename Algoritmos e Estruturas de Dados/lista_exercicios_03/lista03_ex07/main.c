#include <stdio.h>
#include <stdlib.h>

// Exercicio 7 (Lista 3)

#define NUM_PESSOAS 20
#define MAIOR_IDADE 18

int main()
{
    int idade, contador=0;
    for (int i=0; (i<NUM_PESSOAS); i++){
        printf("Digite a idade (em anos completos) da %i%c pessoa: ", i+1, 166);
        scanf("%d", &idade);
        if (idade>=MAIOR_IDADE)
            contador +=1;
    }

    printf("\nMAIORES DE IDADE = %d pessoas", contador);

    printf("\n");
    return 0;
}
