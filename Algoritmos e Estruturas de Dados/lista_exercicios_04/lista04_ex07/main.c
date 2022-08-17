#include <stdio.h>
#include <stdlib.h>

// Exercicio 7 (Lista 4)

//
void ler_valores_vetor (int vet[], int tam);
//

int main()
{
    int tamR=5, tamS=10;
    int vetR[tamR], vetS[tamS];
    int i, j, k;

    // Ler os valores do primeiro vetor
    printf("Digite os valores do vetor R:\n");
    ler_valores_vetor(vetR, tamR);

    system("pause&&cls");
    // Ler os valores do segundo vetor
    printf("Digite os valores do vetor S:\n");
    ler_valores_vetor(vetS, tamS);

    system("pause&&cls");
    // Contar os valores comuns para alocar o novo vetor
    int tamX=0;
    for (i=0; i<tamR; i++){
        for (j=0; j<tamS; j++){
            if (vetR[i]==vetS[j]){
                tamX++;
            }
        }
    }

    // Receber os valores comuns no novo vetor
    int vetX[tamX];
    k = 0;
    for (i=0; i<tamR; i++){
        for (j=0; j<tamS; j++){
            if (vetR[i]==vetS[j]){
                vetX[k]=vetR[i];
                k++;
            }
        }
    }

    // Remover valores repetidos
    for (k=0; k<tamX-1; k++) {
        for (int x=0; x<tamX; x++) {
            if ((x!=k) && (vetX[k]==vetX[x])) {
                for (int y=x; y<tamX-1; y++) {
                    vetX[y]=vetX[y+1];
                }
                tamX--;
                k--;
                break;
            }
        }
    }

    // Printar os valores do novo vetor (não ordenados)
    printf("Vetor X (valores comuns de R e S) = [ ");
    for (k=0; k<tamX; k++){
        printf("%d ", vetX[k]);
    }
    printf("]\n");

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
