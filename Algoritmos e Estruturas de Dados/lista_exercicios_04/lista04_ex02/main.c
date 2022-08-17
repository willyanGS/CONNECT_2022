#include <stdio.h>
#include <stdlib.h>

// Exercicio 2 (Lista 4)

#define TAMANHO_VET 20

int main()
{
    int vet[TAMANHO_VET], pares=0, impares=0, maiores50=0, menores7=0;

    for (int i=0; i<TAMANHO_VET; i++){
        printf("Digite o %d%c valor do VETOR: ", i+1, 167);
        scanf("%d", &vet[i]);
        if ((vet[i]%2)==0)
            pares += 1;
        else
            impares += 1;
        if (vet[i]>50)
            maiores50 += 1;
        if (vet[i]<7)
            menores7 +=1;
    }
    printf("\nTOTAL PARES = %d", pares);
    printf("\nTOTAL IMPARES = %d", impares);
    printf("\nTOTAL >50 = %d", maiores50);
    printf("\nTOTAL <7 = %d", menores7);

    printf("\n");
    return 0;
}
