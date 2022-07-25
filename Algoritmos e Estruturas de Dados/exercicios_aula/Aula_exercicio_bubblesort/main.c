#include <stdio.h>
#include <stdlib.h>

// Exercicio aula vetor (ordenação = bubble sort) criar algoritmo

int main()
{
    int vet[]={5,3,2,1,90,6};
    int tam=(sizeof(vet)/sizeof(int));

    printf("\nINICIO = [%d ; %d ; %d ; %d ; %d ; %d]", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);

    int index, aux;
    for(int next=tam; next>0; next--){
        for(index=0; index<next-1; index++){
            if (vet[index]>vet[index+1]){
                aux=vet[index];
                vet[index]=vet[index+1];
                vet[index+1]=aux;
                printf("\n    %d%c = [%d ; %d ; %d ; %d ; %d ; %d]", index+1, 167, vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);
            }
        }
        printf("\n\tPROXIMA");
    }

    printf("\n   FIM = [%d ; %d ; %d ; %d ; %d ; %d]", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);
    printf("\n");
    return 0;
}
