#include<stdbool.h>

#define TAM 100 // alocação estática

// Structs
typedef struct{
    int chave;
} Elemento;
//
typedef struct {
    Elemento Arranjo[TAM];
    int qtdElem;
} Lista;
//

// Prototypes
void iniciar_lista(Lista *p_l);
void reiniciar_lista(Lista *p_l);
int consultar_tamanho(Lista *p_l);
void imprimir_lista(Lista *p_l);
//
bool inserirElemLista(Lista *p_l, Elemento elem, int pos_usu);
bool inserirElemFinalLista(Lista *p_l, Elemento elem);
bool removerElemListaPeloIndice(Lista *p_l, int pos_usu);
bool removerElemListaPelaChave(Lista *p_l, int chave);
int buscaSequencial(Lista *p_l, int chave_busca);
//
bool inserirElemListaOrdenada(Lista *p_l, Elemento elem);
bool removerElemListaOrdenadaPelaChave(Lista *p_l, int chave);
int buscaBinaria(Lista *p_l, int chave_busca);
//
