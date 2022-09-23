#include <stdio.h>
#include <stdlib.h>
//
#include "arranjo_funcoes.h"
//

int main()
{
    // Teste em lista desordenada
    // Elementos a serem inseridos na lista, definidos pelo usuário
    Elemento dado_1, dado_2, dado_3;
    dado_1.chave = 1111;
    dado_2.chave = 2222;
    dado_3.chave = 3333;

    // Iniciar uma lista e ver tamanho
    Lista listaX;
    iniciar_lista(&listaX);
    printf("Tamanho inicial = %d\n\n", consultar_tamanho(&listaX));

    // Inserir um elemento na lista, em uma posição determinada pelo usuário
    int pos_user = 0;   // definido pelo usuário
    inserirElemLista(&listaX, dado_1, pos_user);

    // Inserir um elemento no fim da lista
    inserirElemFinalLista(&listaX, dado_2);
    imprimir_lista(&listaX);    // conferencia

    // Inserir um elemento na lista, em uma posição determinada pelo usuário
    pos_user = 1;   // definido pelo usuário
    inserirElemLista(&listaX, dado_3, pos_user);
    imprimir_lista(&listaX);    // conferencia

    // Remover um elemento da lista, em uma posição determinada pelo usuário
    pos_user = 1;   // definido pelo usuário
    removerElemListaPeloIndice(&listaX, pos_user);
    imprimir_lista(&listaX);    // conferencia

    // Remover um elemento da lista, pelo valor determinado pelo usuário
    int chave_busca = 1111;     // definido pelo usuário
    removerElemListaPelaChave(&listaX, chave_busca);
    imprimir_lista(&listaX);    // conferencia
    printf("Tamanho final = %d\n", consultar_tamanho(&listaX));


    printf("\n");
    system("pause&&cls||clear");

    // Teste em lista ordenada
    // Elementos a serem inseridos na lista, definidos pelo usuário
    Elemento dado_4, dado_5, dado_6;
    dado_4.chave = 100;
    dado_5.chave = 102;
    dado_6.chave = 105;

    // Iniciar uma lista e ver tamanho
    Lista listaY;
    iniciar_lista(&listaY);
    printf("Tamanho inicial = %d\n\n", consultar_tamanho(&listaY));

    // Inserir os elementos ordenados
    inserirElemListaOrdenada(&listaY, dado_5);
    imprimir_lista(&listaY);
    inserirElemListaOrdenada(&listaY, dado_6);
    imprimir_lista(&listaY);
    inserirElemListaOrdenada(&listaY, dado_4);
    imprimir_lista(&listaY);

    // Remover um elemento da lista, pelo valor determinado pelo usuário
    chave_busca = 102;
    removerElemListaOrdenadaPelaChave(&listaY, chave_busca);
    imprimir_lista(&listaY);
    printf("Tamanho final = %d\n", consultar_tamanho(&listaY));

    printf("\n");
    return 0;
}
