#include<stdio.h>
#include<stdbool.h>
#include "arranjo_funcoes.h"

// ***** FUNCOES GERAIS PARA ARRANJOS *****
// Funcao para iniciar uma lista
void iniciar_lista(Lista *p_l) {
    (p_l->qtdElem) = 0;
}


// Funcao para reiniciar uma lista
void reiniciar_lista(Lista *p_l) {
    (p_l->qtdElem) = 0;
}


// Funcao para verificar o tamanho de uma lista
int consultar_tamanho(Lista *p_l) {
    return p_l->qtdElem;
}


// Funcao para imprimir os elementos da lista
void imprimir_lista(Lista *p_l) {
    int pos;
    printf("------ Inicio ------\n");
    for (pos=0; pos < (p_l->qtdElem); pos++){
        printf("Chave %d = %d\n", pos, p_l->Arranjo[pos].chave);
    }
    printf("------- Fim --------\n\n");
}


// ***** FUNCOES PARA ARRANJOS DESORDENADOS *****
// Funcao para inserir novo elemento na lista
bool inserirElemLista(Lista *p_l, Elemento elem, int pos_usu) {
    if ( ((p_l->qtdElem) == TAM) || (pos_usu < 0) || (pos_usu > (p_l->qtdElem)) )    // verificação da posição inserida pelo usuario
        return false;
    int j;
    for (j = (p_l->qtdElem); j > pos_usu; j--)      //encontra posição
        (p_l->Arranjo[j]) = (p_l->Arranjo[j-1]);    //desloca elementos p/ direita
    (p_l->Arranjo[j]) = elem;
    (p_l->qtdElem)++;
    return true;
}


// Funcao para inserir novo elemento no final da lista
bool inserirElemFinalLista(Lista *p_l, Elemento elem) {
    if ((p_l->qtdElem) == TAM)
        return false;
    (p_l->Arranjo[(p_l->qtdElem)]) = elem;
    (p_l->qtdElem)++;
    return true;
}


// Funcao para remover um elemento da lista pela posição indicada pelo usuário
bool removerElemListaPeloIndice(Lista *p_l, int pos_usu) {
    if ( (pos_usu < 0) || (pos_usu >= (p_l->qtdElem)) )  // verificação da posição inserida pelo usuario
        return false;
    (p_l->Arranjo[pos_usu]) = (p_l->Arranjo[((p_l->qtdElem) - 1)]);     // Sobrescreve o último elemento na posição desejada e
    (p_l->qtdElem)--;                                                   // remove (inutiliza) a última posição
    return true;
}


// Funcao para remover um elemento da lista pelo valor indicado pelo usuário
bool removerElemListaPelaChave(Lista *p_l, int chave) {
    int pos = buscaSequencial(p_l, chave);     // encontrar a posição da chave inserida pelo usuário
    if (pos == -1)
        return false;
    (p_l->Arranjo[pos]) = (p_l->Arranjo[((p_l->qtdElem) - 1)]);     // Sobrescreve o último elemento na posição encontrada e
    (p_l->qtdElem)--;                                               // remove (inutiliza) a última posição
    return true;    // poderia ser substituido por >>>> return removerElemListaPeloIndice(p_l, buscaSequencial(p_l, chave);
}


// Funcao para encontrar a posição de um determinado valor
int buscaSequencial(Lista *p_l, int chave_busca) {
    int i;
    for (i=0; i<p_l->qtdElem; i++)
        if (p_l->Arranjo[i].chave==chave_busca)
            return i;

    return -1;  // se não encontrou
}


// ***** FUNCOES PARA ARRANJOS ORDENADOS *****
// Funcao para inserir ordenadamente elemento na lista
bool inserirElemListaOrdenada(Lista *p_l, Elemento elem) {
    if ((p_l->qtdElem) >= TAM)
        return false;   // lista cheia
    int i;
    for (i = ((p_l->qtdElem)-1); ((i >= 0) && ((p_l->Arranjo[i].chave) > elem.chave)); i--)
        (p_l->Arranjo[i+1]) = (p_l->Arranjo[i]); //desloca elementos p/ direita
    (p_l->Arranjo[i+1]) = elem;
    (p_l->qtdElem)++;
    return true;
}


// Funcao para remover um elemento de lista ordenada
bool removerElemListaOrdenadaPelaChave(Lista *p_l, int chave) {
    int pos = buscaBinaria(p_l, chave);
    if(pos == -1)
        return false;
    int j;
    for(j=pos; j < ((p_l->qtdElem)-1); j++)
        (p_l->Arranjo[j]) = (p_l->Arranjo[j+1]);
    (p_l->qtdElem)--;
    return true;
}


// Funcao para encontrar posição de um determinado valor em lista ordenada
int buscaBinaria(Lista *p_l, int chave_busca) {
    int esq, dir, meio;
    esq = 0;
    dir = ((p_l->qtdElem)-1);
    while(esq <= dir) {
        meio = ((esq + dir) / 2);
        if(p_l->Arranjo[meio].chave == chave_busca)
            return meio;    // elemento encontrado
        else {
            if(p_l->Arranjo[meio].chave < chave_busca)
                esq = meio + 1;     // parte superior do arranjo
            else
                dir = meio - 1;     // parte inferior do arranjo
        }
    }
    return -1;
}

