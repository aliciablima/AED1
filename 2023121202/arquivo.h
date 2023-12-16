#ifndef LISTA_LIGADA_DINAMICA_H
#define LISTA_LIGADA_DINAMICA_H

typedef struct No {
    int valor;
    struct No* proximo;
} No;

typedef struct {
    No* cabeca;
} LISTA_LIGADA_DINAMICA;

void inicializarLista(LISTA_LIGADA_DINAMICA* lista);
void inserirElemento(LISTA_LIGADA_DINAMICA* lista, int valor);
void imprimirLista(LISTA_LIGADA_DINAMICA lista);
LISTA_LIGADA_DINAMICA permutaA(LISTA_LIGADA_DINAMICA lista);
LISTA_LIGADA_DINAMICA permutaB(LISTA_LIGADA_DINAMICA lista);
LISTA_LIGADA_DINAMICA copiarLista(LISTA_LIGADA_DINAMICA lista);
LISTA_LIGADA_DINAMICA concatenarListas(LISTA_LIGADA_DINAMICA lista1, LISTA_LIGADA_DINAMICA lista2);
LISTA_LIGADA_DINAMICA intercalarListas(LISTA_LIGADA_DINAMICA lista1, LISTA_LIGADA_DINAMICA lista2);

#endif