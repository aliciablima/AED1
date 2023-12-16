#include <stdlib.h>
#include <stdio.h>
#include "arquivo.h"

void inicializarLista(LISTA_LIGADA_DINAMICA* lista) {
    lista->cabeca = NULL;
}
void inserirElemento(LISTA_LIGADA_DINAMICA* lista, int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        exit(1);
    }
    novoNo->valor = valor;
    novoNo->proximo = lista->cabeca;
    lista->cabeca = novoNo;
}
void imprimirLista(LISTA_LIGADA_DINAMICA lista) {
    No* atual = lista.cabeca;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}
LISTA_LIGADA_DINAMICA permutaA(LISTA_LIGADA_DINAMICA lista) {
    LISTA_LIGADA_DINAMICA novaLista;
    inicializarLista(&novaLista);
    No* atual = lista.cabeca;

    if (atual != NULL) {
        while (atual->proximo != NULL) {
            inserirElemento(&novaLista, atual->proximo->valor);
            atual = atual->proximo;
        }
        inserirElemento(&novaLista, lista.cabeca->valor);
    }

    return novaLista;
}

LISTA_LIGADA_DINAMICA permutaB(LISTA_LIGADA_DINAMICA lista) {
    LISTA_LIGADA_DINAMICA novaLista;
    inicializarLista(&novaLista);
    No* atual = lista.cabeca;

    while (atual != NULL) {
        inserirElemento(&novaLista, atual->valor);
        atual = atual->proximo;
    }

    return novaLista;
}

LISTA_LIGADA_DINAMICA copiarLista(LISTA_LIGADA_DINAMICA lista) {
    LISTA_LIGADA_DINAMICA novaLista;
    inicializarLista(&novaLista);

    No* atual = lista.cabeca;

    while (atual != NULL) {
        inserirElemento(&novaLista, atual->valor);
        atual = atual->proximo;
    }

    return novaLista;
}

LISTA_LIGADA_DINAMICA concatenarListas(LISTA_LIGADA_DINAMICA lista1, LISTA_LIGADA_DINAMICA lista2) {
    LISTA_LIGADA_DINAMICA novaLista;
    inicializarLista(&novaLista);

    No* atual = lista1.cabeca;

    while (atual != NULL) {
        inserirElemento(&novaLista, atual->valor);
        atual = atual->proximo;
    }

    atual = lista2.cabeca;

    while (atual != NULL) {
        inserirElemento(&novaLista, atual->valor);
        atual = atual->proximo;
    }

    return novaLista;
}

LISTA_LIGADA_DINAMICA intercalarListas(LISTA_LIGADA_DINAMICA lista1, LISTA_LIGADA_DINAMICA lista2) {
    LISTA_LIGADA_DINAMICA novaLista;
    inicializarLista(&novaLista);

    No* atual1 = lista1.cabeca;
    No* atual2 = lista2.cabeca;

    while (atual1 != NULL || atual2 != NULL) {
        if (atual1 != NULL) {
            inserirElemento(&novaLista, atual1->valor);
            atual1 = atual1->proximo;
        }

        if (atual2 != NULL) {
            inserirElemento(&novaLista, atual2->valor);
            atual2 = atual2->proximo;
        }
    }
    return novaLista;
}