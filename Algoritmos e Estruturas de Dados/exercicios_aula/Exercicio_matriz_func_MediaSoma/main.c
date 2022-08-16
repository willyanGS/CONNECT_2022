#include <stdio.h>
#include <stdlib.h>

// Exercicio = funções para ler uma matriz, calcular a media dos elementos, e somar duas matrizes.

//
#define LIN 2
#define COL 3
//
void lerMatriz(double matrix[LIN][COL]);
void printarMatriz (double matrix[LIN][COL]);
double somatorioMatriz(double matrix[LIN][COL]);
double mediaMatriz(double matrix[LIN][COL]);
void soma2Matrizes(double matrix1[LIN][COL], double matrix2[LIN][COL], double matrixR[LIN][COL]);
//

int main()
{
    // MATRIZ 1
    printf("MATRIZ 1:\n");
    double mat1[LIN][COL];
    lerMatriz(mat1);
    // somatorio dos elementos e media
    double somatorio1 = somatorioMatriz(mat1);
    printf("\nSOMATORIO = %.4lf", somatorio1);
    double media1 = mediaMatriz(mat1);
    printf("\nMEDIA = %.4lf", media1);

    printf("\n\n"); system("pause&&cls||clear");

    // MATRIZ 2
    printf("MATRIZ 2:\n");
    double mat2[LIN][COL];
    lerMatriz(mat2);
    // somatorio dos elementos e media
    double somatorio2 = somatorioMatriz(mat2);
    printf("\nSOMATORIO = %.4lf", somatorio2);
    double media2 = mediaMatriz(mat2);
    printf("\nMEDIA = %.4lf", media2);

    printf("\n\n"); system("pause&&cls||clear");

    // MATRIZ R = MATRIZ1 + MATRIZ2
    printf("MATRIZ RESULTANTE (SOMA):\n");
    double matR[LIN][COL];
    soma2Matrizes(mat1,mat2,matR);
    printf("\n");
    printarMatriz(matR);

    printf("\n");
    return 0;
}

void lerMatriz(double matrix[LIN][COL]){
    for (int i=0; i<LIN; i++){
        for (int j=0; j<COL; j++){
            printf("[%d,%d] = ", i, j);
            scanf("%lf", &matrix[i][j]);
        }
    }
}

void printarMatriz (double matrix[LIN][COL]){
    for (int i=0; i<LIN; i++){
        printf(" |");
        for (int j=0; j<COL; j++){
            printf("  [%d,%d]=%6.2lf", i, j, matrix[i][j]);
        }
    printf("  |\n");
    }
}

double somatorioMatriz(double matrix[LIN][COL]) {
    double somatorioMatriz=0.0;
    for (int i=0; i<LIN; i++){
        for (int j=0; j<COL; j++){
            somatorioMatriz+=matrix[i][j];
        }
    }
    return somatorioMatriz;
}

double mediaMatriz(double matrix[LIN][COL]) {
    double mediaMatriz = ((somatorioMatriz(matrix))/(LIN*COL));
    return mediaMatriz;
}

void soma2Matrizes(double matrix1[LIN][COL], double matrix2[LIN][COL], double matrixR[LIN][COL]) {
    for (int i=0; i<LIN; i++){
        for (int j=0; j<COL; j++){
            matrixR[i][j] = (matrix1[i][j]+matrix2[i][j]);
        }
    }
}
