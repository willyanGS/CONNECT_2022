#include <stdio.h>
#include <stdlib.h>

// Exercicio 10 (Lista 4)

//
void ler_vetor(int vet[]);
void printar_vetor(int vet[]);
void copiar_vetor(int vet1[], int vet2[]);
void ordenar_vetor(int vet[]);
//
int tamanho;
//

int main()
{
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vet1[tamanho];
    ler_vetor(vet1);
    system("pause&&cls||clear");
    printf("Vetor original > ");
    printar_vetor(vet1);
    printf("\n");

    int vet2[tamanho];
    copiar_vetor(vet1,vet2);
    printf("Vetor copia    > ");
    printar_vetor(vet2);
    printf("\n");

    ordenar_vetor(vet2);
    printf("Vetor ordenado > ");
    printar_vetor(vet2);
    printf("\n");

    printf("\n");
    return 0;
}

void ler_vetor(int vet[]){

    printf("Digite os valores do vetor:\n");
    for (int i=0; i<tamanho; i++){
        printf("[%d%c] = ", i+1, 167);
        scanf("%d", &vet[i]);
    }
}

void printar_vetor(int vet[]){
    printf("[");
    for (int i=0; i<tamanho; i++){
        printf(" %3d ", vet[i]);
    }
    printf("]");
}

void copiar_vetor(int vet1[], int vet2[]){
    for (int i=0; i<tamanho; i++){
        vet2[i]=vet1[i];
    }
}

void ordenar_vetor(int vet[]){
    int aux, check;
    do {
        check=1;
        for (int i=1; i<tamanho-1; i++) {
            if (vet[i]<vet[i-1]) {
                aux = vet[i-1];
                vet[i-1] = vet[i];
                vet[i] = aux;
                check=0;
            }
            if (vet[i]>vet[i+1]) {
                aux = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = aux;
                check=0;
            }
        }
    } while (check==0);
}
