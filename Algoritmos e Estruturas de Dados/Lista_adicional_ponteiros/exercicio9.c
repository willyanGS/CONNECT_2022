#include <stdio.h>
#include <math.h>
// Exercicio 9

//
double media(double vet[], int n, int *i);
double modulo(double X);
//

int exercicio9(void) {
    int num = 10;
    double vetor[] = {10,1,1,10,1,1,2,1,1};
    int posicao=-1;

    double mean = media(vetor, num, &posicao);

    printf("Media = %lf\nPosicao = %d", mean, posicao);

    return 0;
}

double media(double vet[], int n, int *i) {

    double soma = 0.0, media = 0.0;
    for (int j=0; j<n; j++) {
        soma += vet[j];
    }
    media = (soma/n);

    double dif = modulo(media - vet[0]);
    for (int j=1; j<n; j++) {
        if (modulo(media - vet[j]) < dif) {
            dif = modulo(media - vet[j]);
            *i = j;
        }
    }

    return media;
}

double modulo(double X) {
    return (sqrt(pow(X,2)));
}
