#include <stdio.h>
#include <stdlib.h>

// Exercicio = insertion sort

int main()
{
    int vet[] = {5,2,4,6,1,3};
    int tam = (sizeof(vet)/sizeof(vet[0]));

    int aux;
    for(int i=1; i<tam; i++) {
        if (vet[i]<vet[i-1]) {
            aux = vet[i];
            int j;
            for(j=i; (vet[j-1]>aux && j>0); j--){
                vet[j]=vet[j-1];
                //printf("Vetor [%d,%d]: [ %d ; %d ; %d ; %d ; %d ; %d ]\n", i,j, vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);
            }
        vet[j]=aux;
        }
    }

    printf("Vetor final: [ %d ; %d ; %d ; %d ; %d ; %d ]", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);

    printf("\n");
    return 0;
}
