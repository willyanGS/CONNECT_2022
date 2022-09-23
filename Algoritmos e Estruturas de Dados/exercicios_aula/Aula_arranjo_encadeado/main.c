#include <stdio.h>
#include <stdlib.h>
//
#include "arranjo_encadeado_funcoes.h"
//

int main()
{
    Lista lista_teste;

    iniciar_lista(&lista_teste);
    printf("Tamanho = %d\n\n", consultar_tamanho(&lista_teste));

    inserirElemInicioLista(&lista_teste, 45);
    inserirElemInicioLista(&lista_teste, 32);
    inserirElemListaOrdenada(&lista_teste, 40);
    inserirElemListaOrdenada(&lista_teste, 29);
    inserirElemListaOrdenada(&lista_teste, 50);
    inserirElemListaOrdenada(&lista_teste, 33);
    imprimir_lista(&lista_teste);
    printf("Tamanho = %d\n\n", consultar_tamanho(&lista_teste));

    removerElemInicioLista(&lista_teste);
    imprimir_lista(&lista_teste);
    printf("Tamanho = %d\n\n", consultar_tamanho(&lista_teste));

    removerElemListaPelaChave(&lista_teste, 33);
    imprimir_lista(&lista_teste);
    printf("Tamanho = %d\n\n", consultar_tamanho(&lista_teste));

    printf("\n");
    return 0;
}
