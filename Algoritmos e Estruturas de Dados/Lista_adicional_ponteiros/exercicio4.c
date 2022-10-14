#include <stdio.h>
// Exercicio 4

//
void buscar (int vet[], int tam, int posicoes[], int *n);
//

int exercicio4(void)
{
    // Iniciar o vetor de struct com tamanho 100
    int tam = 100;
    int cadastro[tam];

    // Preencher o cadastro com valores 1000,1000,1002,1002,...,1098,1098 (ordenado numericamente crescente) para teste
    for (int i=0; i<tam; i+=2){
        cadastro[i]=i+1000;
        cadastro[i+1]=i+1000;
    }

    // Buscar valor cadastrado e retornar posiçoes do vetor
    int busca[tam];
    int n=0;
    buscar(cadastro, tam, busca, &n);

    printf("Valor encontrado = (%d vezes)\nPosicoes: [", n);
    for (int i=0; i<n; i++){
        printf(" %d ", busca[i]);
    }
    printf("]\n\n");

    return 0;
}

void buscar (int vet[], int tam, int posicoes[], int *n) {
    int chave_busca;
    printf("Buscar: ");
    scanf("%d", &chave_busca);

    // Considerando não ordenado, busca sequencial:
    int x=0;
    for (int i=0; i<tam; i++){
        if (chave_busca == vet[i]){
            (*n)++;
            posicoes[x] = i;
            x++;
        }
    }
}

