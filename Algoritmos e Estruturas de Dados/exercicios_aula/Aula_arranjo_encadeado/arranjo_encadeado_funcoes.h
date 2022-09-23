#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Structs
typedef struct No {
    int chave;
    struct No *next;     // alocacao encadeada
} Elemento;
//
typedef struct {
    Elemento *start;    // inicio da lista encadeada
} Lista;
//

// Prototypes
void iniciar_lista(Lista *p_l);
//void deletar_lista(Lista *p_l)
int consultar_tamanho(Lista *p_l);
void imprimir_lista(Lista *p_l);
//
bool inserirElemInicioLista(Lista *p_l, int elem);
bool inserirElemMeioLista(Elemento *p, int elem);
bool removerElemInicioLista(Lista *p_l);
bool removerElemMeioLista(Elemento *anterior);
bool removerElemListaPelaChave(Lista *p_l, int chave);
Elemento* buscaSequencial(Lista *p_l, int chave_busca, Elemento **anterior);
bool inserirElemListaOrdenada(Lista *p_l, int elem);
//
