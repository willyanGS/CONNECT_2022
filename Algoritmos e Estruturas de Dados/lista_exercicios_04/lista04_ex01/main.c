#include <stdio.h>
#include <stdlib.h>

// Exercicio 1 (Lista 4)

#define TAMANHO_VET 10

int main()
{
    float vet1[TAMANHO_VET], vet2[TAMANHO_VET], vet3[TAMANHO_VET];

    // Valores do vetor1
    for (int i=0; i<TAMANHO_VET; i++){
        printf("Digite o %d%c valor do vetor 1: ", i+1, 167);
        scanf("%f", &vet1[i]);
    }
    system("cls");

    // Valores do vetor2
    for (int i=0; i<TAMANHO_VET; i++){
        printf("Digite o %d%c valor do vetor 2: ", i+1, 167);
        scanf("%f", &vet2[i]);
    }
    system("cls");

    // Valores resultantes (soma)
    printf("VETOR RESULTANTE (SOMA) = [ ");
    for (int i=0; i<TAMANHO_VET; i++){
        vet3[i] = (vet1[i]+vet2[i]);
        printf("%.02f ", vet3[i]);
    }
    printf("]\n");
    return 0;
}
