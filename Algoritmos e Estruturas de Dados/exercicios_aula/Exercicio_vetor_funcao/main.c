#include <stdio.h>
#include <stdlib.h>

//
void ler_vetor(int vetor[], int tam);
void imprimir_vetor(int vet[], int tam);
void zerar_vetor(int vet[], int tam);
int maior_elemento_vetor(int vet[], int tam);
int menor_elemento_vetor(int vet[], int tam);
float media_elementos_vetor(int vet[], int tam);
//

int main()
{
    // definir tamanho do vetor:
    int tam;
    printf("Tamanho do vetor = ");
    scanf("%d", &tam);
    int vetor[tam];

    // funções com vetor:
    ler_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);

    system("cls");
    printf("\nMaior valor   = %d", maior_elemento_vetor(vetor, tam));
    printf("\nMenor valor   = %d", menor_elemento_vetor(vetor, tam));
    printf("\nMedia valores = %.4f", media_elementos_vetor(vetor, tam));
    printf("\n\n");
    system("pause");
    system("cls");

    zerar_vetor(vetor, tam);
    imprimir_vetor(vetor, tam);

    printf("\n");
    return 0;
}


// funcao para ler elementos vetor
void ler_vetor(int vet[], int tam){
    system("cls");
    for(int i=0; i<tam; i++) {
        printf("Valor %d%c posicao = ", i+1, 167);
        scanf("%d", &vet[i]);
    }
}

// funcao para printar elementos vetor
void imprimir_vetor(int vet[], int tam){
    system("cls");
    printf("\nValores Vetor = [");
    for(int i=0; i<tam; i++) {
        printf(" %d", vet[i]);
        if (i<tam-1)
            printf(" ;");
    }
    printf(" ]\n\n");
    system("pause");
}

// funcao para zerar os elementos
void zerar_vetor(int vet[], int tam){
    for(int i=0; i<tam; i++) {
        vet[i]=0;
    }
}

// funcao para maior elemento do vetor
int maior_elemento_vetor(int vet[], int tam){
    int maior=vet[0];
    for(int i=1; i<tam; i++){
        if(vet[i]>maior)
            maior=vet[i];
    }
    return maior;
}

// funcao para menor elemento do vetor
int menor_elemento_vetor(int vet[], int tam){
    int menor=vet[0];
    for(int i=1; i<tam; i++){
        if(vet[i]<menor)
            menor=vet[i];
    }
    return menor;
}

// funcao para media dos elementos do vetor
float media_elementos_vetor(int vet[], int tam){
    float soma=0.0;
    for(int i=0; i<tam; i++){
        soma+=vet[i];
    }
    return (soma/tam);
}
