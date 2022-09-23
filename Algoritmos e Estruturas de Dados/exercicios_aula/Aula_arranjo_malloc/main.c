#include <stdio.h>
#include <stdlib.h>
//
#include "arranjo_malloc_funcoes.h"
//

int main()
{
    // Teste em lista desordenada
    Lista lista_teste;
    Elemento aux;
    iniciar_lista(&lista_teste);

    for(int i=0; i<55; i++){
        aux.chave = i+100;
        inserirElemFinalLista(&lista_teste, aux);
    }
    imprimir_lista(&lista_teste);
    printf("Quantidade elemento = %d\nTamanho total = %d\n\n", lista_teste.qtdElem, lista_teste.TAM);


    for(int i=2; i<53; i++){
        removerElemListaPelaChave(&lista_teste, i+100);
    }
    imprimir_lista(&lista_teste);
    printf("Quantidade elemento = %d\nTamanho total = %d\n\n", lista_teste.qtdElem, lista_teste.TAM);


    system("pause&&cls||clear");
    // Teste em lista ordenada
    Lista lista_teste2;
    Elemento aux2;
    iniciar_lista(&lista_teste2);
    for(int i=0; i<30; i+=2){
        aux.chave = i+100;
        inserirElemFinalLista(&lista_teste2, aux);
    }
    imprimir_lista(&lista_teste2);
    printf("Quantidade elemento = %d\nTamanho total = %d\n\n", lista_teste2.qtdElem, lista_teste2.TAM);

    for(int i=1; i<20; i+=2){
        aux.chave = i+100;
        inserirElemListaOrdenada(&lista_teste2, aux);
    }

    imprimir_lista(&lista_teste2);
    printf("Quantidade elemento = %d\nTamanho total = %d\n\n", lista_teste2.qtdElem, lista_teste2.TAM);

    removerElemListaOrdenadaPelaChave(&lista_teste2, 101);
    removerElemListaOrdenadaPelaChave(&lista_teste2, 114);
    removerElemListaOrdenadaPelaChave(&lista_teste2, 105);
    imprimir_lista(&lista_teste2);
    printf("Quantidade elemento = %d\nTamanho total = %d\n\n", lista_teste2.qtdElem, lista_teste2.TAM);


    printf("\n");
    return 0;
}
