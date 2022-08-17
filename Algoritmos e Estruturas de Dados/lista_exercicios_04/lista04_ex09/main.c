#include <stdio.h>
#include <stdlib.h>

// Exercicio 9 (Lista 4)

//
void ler_valores_vetor (int vet[], int tam);
//

int main()
{
    // Ler os valores iniciais do vetor
    int TAM = 10;
    int vetD[TAM];
    printf("Digite os valores do vetor:\n");
    ler_valores_vetor(vetD, TAM);

    // Retirar os valores negativos ou nulos do vetor
    for (int i=0; i<TAM; ){
        if (vetD[i]<=0) {
            for (int j=i; j<TAM-1; j++){
                vetD[j]=vetD[j+1];
            }
            TAM--;
        } else
            i++;
    }

    // Vetor resultante
    printf("\nVetor D (positivos nao nulos) = [");
    for (int i=0; i<TAM; i++){
        printf(" %d ", vetD[i]);
    }
    printf("]");

    printf("\n");
    return 0;
}

// Função para ler valores do vetor
void ler_valores_vetor (int vet[], int tam) {
    for (int i=0; i<tam; i++){
        printf("%2d%c numero = ", i+1, 167);
        scanf("%d", &vet[i]);
    }
}
