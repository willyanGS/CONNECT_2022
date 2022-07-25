#include <stdio.h>
#include <stdlib.h>

// Exercicio aula vetor (ordenação = Selection) - ordenação decrescente

int main()
{
    int vet[]={5,3,2,1,90,6};
    int tam=(sizeof(vet)/sizeof(int));

    printf("\nINICIO = [%d ; %d ; %d ; %d ; %d ; %d]", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);

    int maximo, aux;
    for(int i=0; i<tam; i++){

        maximo = i;  // = ache o MAIOR a partir de "i"
        for (int j=i+1; j<tam; j++){
            if(vet[maximo]<vet[j])
                maximo=j;
        }

        //trocando os valores dentro do vetor com um backup(aux)
        aux=vet[i];
        vet[i]=vet[maximo];
        vet[maximo]=aux;
        printf("\n    %d%c = [%d ; %d ; %d ; %d ; %d ; %d]", i+1, 167, vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);
    }
    printf("\n   FIM = [%d ; %d ; %d ; %d ; %d ; %d]", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);
    printf("\n");
    return 0;
}
