#include <stdio.h>
#include <stdlib.h>

// Vetor de 10 posições, scanf, printar o maior e o menor valor;

int main()
{
    float vetor[10], maior, menor;

    for (int i=0; i<10; i++) {
        printf("Digite o %d%c valor: ", i+1, 167);
        scanf("%f", &vetor[i]);
    }
    maior=vetor[0];
    menor=vetor[0];
    for (int i=1; i<10; i++) {
        if (vetor[i]>=maior)
            maior=vetor[i];
        else if (vetor[i]<=menor)
            menor=vetor[i];
    }

    printf("\n\nMaior valor = %.2f\nMenor valor = %.2f", maior, menor);

    printf("\n");
    return 0;
}
