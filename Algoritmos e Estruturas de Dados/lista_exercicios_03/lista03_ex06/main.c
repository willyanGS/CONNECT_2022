#include <stdio.h>
#include <stdlib.h>

// Exercicio 6 (Lista 3)

#define NUM_PESSOAS 20

int main()
{
    int idade;
    float soma=0.0, media=0.0;
    for (int i=0; (i<NUM_PESSOAS); i++){
        printf("Digite a idade (em anos completos) da %i%c pessoa: ", i+1, 166);
        scanf("%d", &idade);
        soma += idade;
    }

    media = (float)(soma/NUM_PESSOAS);
    printf("\nMEDIA DAS IDADES = %.2f anos", media);

    printf("\n");
    return 0;
}
