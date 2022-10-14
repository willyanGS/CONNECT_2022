#include <stdio.h>
// Exercicio 3

//
struct Pessoa{
    int rg;
    int cpf;
    char nome[80];
};
//
int buscarRG (struct Pessoa cadastro[], int tam);
//

int exercicio3(void)
{
    // Iniciar o vetor de struct com tamanho 100
    int tam = 100;
    struct Pessoa cadastro[tam];

    // Preencher o vetor.rg com valores 1000,1002,...,1196,1198 (ordenado numericamente crescente) para teste
    for (int i=0; i<tam; i++){
        cadastro[i].rg=i*2+1000;
    }

    // Buscar valor de RG e retornar posição do vetor
    int buscar = buscarRG(cadastro,tam);
    if (buscar==(-1))
        printf("RG inexistente");
    else
        printf("RG encontrado = %d (posicao)", buscar);

    return 0;
}

int buscarRG (struct Pessoa cadastro[], int tam) {
    int RG_busca;
    printf("RG buscado: ");
    scanf("%d", &RG_busca);

    // Checar inicialmente os extremos
    int min = 0;
    int max = (tam-1);
    if ( (RG_busca < cadastro[min].rg) || (RG_busca > cadastro[max].rg) )   // Fora do intervalo existente
        return -1;

    // Busca binaria
    int split;
    do {
        if ((max-min)>1) {
            split = ((min+max)/2);
        } else if (max-split == 1) {   // Para testar a posicao maxima, quando restar apenas ela
            split++;
            min++;
        } else if (split-min == 1) {   // Para testar a posicao minima, quando restar apenas ela
            split--;
            max--;
        }

        // Comparar o valor buscado
        if (RG_busca == cadastro[split].rg)
            return split;
        else if (RG_busca > cadastro[split].rg)
            min=split;
        else if (RG_busca < cadastro[split].rg)
            max=split;

    } while ((max-min)>0);
    return -1;
}
