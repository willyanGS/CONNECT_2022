#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exercicio: ler uma string e contar quantas vogais, consoantes, palavras e localizar na frase

//
int qtd_vogais(char frase[], int tam);
int qtd_consoantes(char frase[], int tam);
int qtd_palavras(char frase[], int tam);
int localizar_palavra(char frase[]);
//

int main()
{
    int TAM = 1000;
    char frase[TAM];
    printf("Digite uma frase: ");
    gets(frase);

    int vogais=0, consoantes=0;
    vogais = qtd_vogais(frase,TAM);
    consoantes = qtd_consoantes(frase,TAM);
    printf("\nTOTAL DE VOGAIS = %d", vogais);
    printf("\nTOTAL DE CONSOANTES = %d", consoantes);
    printf("\nTOTAL DE PALAVRAS = %d\n", qtd_palavras(frase,TAM));

    int palavra = localizar_palavra(frase);
    if (palavra>=0)
        printf("\nPalavra encontrada na posicao(indice) = %d", palavra);
    else
        printf("\nPalavra nao encontrada na frase");

    printf("\n");
    return 0;
}

// função para contar vogais
int qtd_vogais(char frase[], int tam){
    int vogais=0;
    for (int i=0; (i<tam && frase[i]!='\0'); i++){
        if ((frase[i]<65 || frase[i]>90) && (frase[i]<97 || frase[i]>122)) // descontando espaco e pontuacao
                continue;
        else {
            if (frase[i]=='a' || frase[i]=='A' ||
                frase[i]=='e' || frase[i]=='E' ||
                frase[i]=='i' || frase[i]=='I' ||
                frase[i]=='o' || frase[i]=='O' ||
                frase[i]=='u' || frase[i]=='U')
                vogais++;
        }
    }
    return vogais;
}

// função para contar consoantes
int qtd_consoantes(char frase[], int tam){
    int consoantes = 0;
    for (int i=0; (i<tam && frase[i]!='\0'); i++){
        if ((frase[i]<65 || frase[i]>90) && (frase[i]<97 || frase[i]>122)) // descontando espaco e pontuacao
                continue;
        else {
            if (frase[i]!='a' && frase[i]!='A' &&
                frase[i]!='e' && frase[i]!='E' &&
                frase[i]!='i' && frase[i]!='I' &&
                frase[i]!='o' && frase[i]!='O' &&
                frase[i]!='u' && frase[i]!='U')
                consoantes++;
        }
    }
    return consoantes;
}

// função para contar palavras
int qtd_palavras(char frase[], int tam){
    int palavras;
    if (frase[0]==32)   // começar de 0 se a frase começar com espaço
        palavras=0;
    else
        palavras=1;     // começar de 1 se a frase começar com uma palavra
    for (int i=0; (i<tam && frase[i]!='\0'); i++){
        if ((frase[i]==32 || frase[i]==40) && ((frase[i+1]>=65 && frase[i+1]<=90) || (frase[i+1]>=97 && frase[i+1]<=122)))
                palavras++;
    }
    return palavras;
}

// função para procurar uma determinada palavra no texto (case sensitive)
int localizar_palavra(char frase[]) {
    int posicao = 0;
    char palavra[30];
    printf("\nPalavra buscada: ");
    gets(palavra);

    while (posicao<=(strlen(frase)-strlen(palavra)) && frase[posicao]!='\0') { // *** verificar posicao de parada
        int contador = 0;
        int j=posicao;
        for (int i=0; i<strlen(palavra); i++){
            //printf("%d", i);
            if (palavra[i] == frase[j]) {
                j++;
                contador++;
            } else {
                contador = 0;
                break;
            }
        }
        if (contador == strlen(palavra))
            return posicao;
        else
            posicao++;
    }
    return -1;
}
