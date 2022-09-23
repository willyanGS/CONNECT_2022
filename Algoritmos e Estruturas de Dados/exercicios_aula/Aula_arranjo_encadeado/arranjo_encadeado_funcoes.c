#include "arranjo_encadeado_funcoes.h"


// ***** FUNCOES PARA ARRANJOS SIMPLESMENTE ENCADEADOS *****
// Funcao para iniciar uma lista
void iniciar_lista (Lista *p_l) {
    (p_l->start) = NULL;
}


// Funcao para deletar a lista
/*void deletar_lista(Lista *p_l) {
    Elemento *temp = (p_l->start);
    while (temp != NULL){
        Elemento *prox = (temp->next);
        free(temp);
        temp = prox;
    }
    (p_l->start) = NULL;
}*/


// Funcao para verificar o tamanho de uma lista
int consultar_tamanho(Lista *p_l) {
    Elemento *temp = (p_l->start);
    int cont = 0;
    while (temp != NULL) {
        cont++;
        temp = (temp->next);  // aponta para o elemento seguinte
    }
    return cont;
}


// Funcao para imprimir os elementos da lista
void imprimir_lista(Lista *p_l) {
    Elemento *temp = (p_l->start);
    int cont = 0;
    printf("------ Inicio ------\n");
    while (temp != NULL) {
        printf("Chave %d = %d\n", cont, (temp->chave));
        temp = temp->next;  // aponta para o elemento seguinte
        cont++;
    }
    printf("------- Fim --------\n");
}


// Funcao para inserir novo elemento no inicio da lista
bool inserirElemInicioLista(Lista *p_l, int elem) {
    Elemento *aux = malloc(sizeof(Elemento));   // aloca um auxiliar (no heap)

    if (aux == NULL)    // teste se foi possível alocar na memoria
        return false;   // nao foi possível alocar o novo elemento

    (aux->chave) = elem;
    (aux->next) = (p_l->start);
    (p_l->start) = aux;
    return true;
}


// Funcao para inserir novo elemento no meio (e final) da lista
bool inserirElemMeioLista(Elemento *p, int elem) {
    Elemento *aux = malloc(sizeof(Elemento));   // aloca um auxiliar (no heap)

    if (aux == NULL)    // teste se foi possível alocar na memoria
        return false;   // nao foi possível alocar o novo elemento

    (aux->chave) = elem;
    (aux->next) = (p->next);
    (p->next) = aux;
    return true;
}


// Funcao para remover o elemento do inicio da lista
bool removerElemInicioLista(Lista *p_l) {
    Elemento *temp = (p_l->start);
    (p_l->start) = temp->next;
    free(temp);
    return true;
}


// Funcao para remover o elemento do meio da lista
bool removerElemMeioLista(Elemento *anterior) {
    Elemento *temp = (anterior->next);
    (anterior->next) = (temp->next);
    free(temp);
    return true;
}


// Funcao para remover um elemento da lista pelo valor indicado pelo usuário
bool removerElemListaPelaChave(Lista *p_l, int chave) {
    Elemento *posi, *anterior;
    anterior = NULL;
    posi = buscaSequencial(p_l, chave, &anterior);

    if (posi == NULL)   // elemento não existe na lista
        return false;

    if (anterior == NULL)
        return removerElemInicioLista(p_l);
    else
        return removerElemMeioLista(anterior);
}


// Funcao para encontrar a posição de um determinado valor
Elemento* buscaSequencial(Lista *p_l, int chave_busca, Elemento **anterior) {
    *anterior = NULL;
    Elemento *buscador = (p_l->start);

    while ( (buscador != NULL) && ((buscador->chave) < chave_busca) ) {
        *anterior = buscador;
        buscador = (buscador->next);
    }

    if ( (buscador != NULL) && ((buscador->chave) == chave_busca) )
        return buscador;
    else
        return NULL;
}


// Funcao para inserir ordenadamente elemento na lista
bool inserirElemListaOrdenada(Lista *p_l, int elem) {
    Elemento *posi, *anterior;
    anterior = NULL;
    posi = buscaSequencial(p_l, elem, &anterior);

    if (posi != NULL)  // elemento ja existe na lista
        return false;

    if (anterior == NULL)   // lista vazia, inserir no inicio
        return inserirElemInicioLista(p_l, elem);
    else    // inserir na posiçao (meio)
        return inserirElemMeioLista(anterior, elem);
}
