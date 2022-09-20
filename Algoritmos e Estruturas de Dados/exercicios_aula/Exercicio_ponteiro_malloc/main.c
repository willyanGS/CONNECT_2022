#include <stdio.h>
#include <stdlib.h>

// Exercicio = criar um vetor e uma matriz com malloc, preencher e liberar

int main()
{
    // Vetor de 10 posicoes de float;
    float *vet;
    vet = malloc(sizeof(float)*10);

    for (int i=0 ; i<10 ; i++){
        vet[i]=(i+10.0+((float)i/10));
    }

    printf("Vet = [");
    for (int i=0 ; i<10 ; i++){
        printf(" %.2f ", vet[i]);
    }
    printf("]\n\n");

    free(vet);


    // matriz 5x4 de inteiros
    int **mat;
    int lin = 5;
    int col = 4;

    mat = malloc(sizeof(int*)*lin);   // alocando o primeiro vetor (vetor de ponteiros de int) = linhas da matriz

    for(int i=0; i<lin; i++){
        mat[i] = malloc(sizeof(int)*col);       // para cada vetor de ponteiros, alocando um vetor de 5 posicoes de int = colunas da matriz
    }

    // depois de alocado, funciona como matriz normal
    // preenchendo a matriz
    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){
            mat[i][j] = ((i*10)+j);
        }
    }

    // printando a matriz
    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){
            printf(" %3d ", mat[i][j]);
        }
        printf("\n");
    }

    // liberar primeiro a memoria dos vetores de int (o conjunto de linhas)
    for (int i=0; i<lin; i++){
        free(mat[i]);
    }

    // liberar depois o vetor de ponteiros (a coluna de ponteiros)
    free(mat);

    printf("\n");
    return 0;
}
