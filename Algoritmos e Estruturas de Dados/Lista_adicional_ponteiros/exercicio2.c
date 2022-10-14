#include <stdio.h>
// Exercicio 2

//
typedef struct Data{
    int dia;
    int mes;
    int ano;
} Data;
//
void ordenarDatas (Data vet[], int tam);
void printarDatas (Data vet[], int tam);
//

int exercicio2(void)
{
    // Tamanho do vetor de datas
    int tam;
    printf("Quantidade de datas a serem ordenadas: ");
    scanf("%d",&tam);
    Data datas[tam];

    // Inserir as datas (dados)
    system("cls||clear");
    printf("*** INSERIR AS DATAS ***\n");
    printf("* Formato = DD/MM/AAAA *\n\n");
    for (int i=0; i<tam; i++) {
        printf("%3d%c data = ", (i+1), 166);
        scanf("%d/%d/%d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }

    // Mostrar as datas digitadas
    system("pause&&cls||clear");
    printf("*** DATAS ***\n\n");
    printarDatas(datas,tam);

    // Mostrar as datas ordenadas
    ordenarDatas(datas,tam);
    system("pause&&cls||clear");
    printf("*** DATAS Ordenadas ***\n\n");
    printarDatas(datas,tam);

}

void ordenarDatas (Data vet[], int tam) {
    int menor;
    Data aux;
    for(int i=0; i<tam-1; i++){
        menor=i;
        for(int j=i+1; j<tam; j++){
            if(vet[j].ano<vet[menor].ano){
                menor=j;
            } else if(vet[j].ano==vet[menor].ano){
                if(vet[j].mes<vet[menor].mes){
                    menor=j;
                } else if (vet[j].mes==vet[menor].mes){
                    if (vet[j].dia<vet[menor].dia){
                        menor=j;
                    }
                }
            }
        }
        if (menor>i) {
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }
}

void printarDatas (Data vet[], int tam) {
    for (int i=0; i<tam; i++) {
        printf("[%d%c] - %02d/%02d/%04d\n", (i+1), 166, vet[i].dia, vet[i].mes, vet[i].ano);
    }
}
