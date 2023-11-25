// arquivo.h

#ifndef LISTA_LINEAR_SEQUENCIAL_H
#define LISTA_LINEAR_SEQUENCIAL_H

#define MAX_TAMANHO 100 // Tamanho máximo da lista

typedef struct {
    int chave;
    // outros campos necessários para seus elementos
} Elemento;

typedef struct {
    Elemento elementos[MAX_TAMANHO];
    int tamanho;
} ListaLinearSequencial;

ListaLinearSequencial criarLista();
void inserirAoFinal(ListaLinearSequencial *lista, Elemento elemento);
void inserirOrdenado(ListaLinearSequencial *lista, Elemento elemento);
void eliminarPelaChave(ListaLinearSequencial *lista, int chave);
void imprimirLista(ListaLinearSequencial lista);

#endif