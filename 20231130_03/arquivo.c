#include "arquivo.h"
#include <stdio.h>

void inicializarLista(ListaLigadaEstatica *lista) {
    for (int i = 0; i < 100; i++) {
        lista->elementos[i].proximo = i + 1;
    }
    lista->cabeca = -1;
    lista->livre = 0;
}

void inserirElemento(ListaLigadaEstatica *lista, int dado) {
    if (lista->livre != -1) {
        int novoIndice = lista->livre;
        lista->livre = lista->elementos[lista->livre].proximo;

        lista->elementos[novoIndice].dado = dado;
        lista->elementos[novoIndice].proximo = lista->cabeca;
        lista->cabeca = novoIndice;
    } else {
        printf("Lista cheia.\n");
    }
}

void percorrerLista(ListaLigadaEstatica *lista) {
    int indice = lista->cabeca;
    while (indice != -1) {
        printf("%d ", lista->elementos[indice].dado);
        indice = lista->elementos[indice].proximo;
    }
    printf("\n");
}

ListaLigadaEstatica construirListaL1a(ListaLigadaEstatica *lista) {
    ListaLigadaEstatica novaLista;
    inicializarLista(&novaLista);

    int indice = lista->cabeca;
    while (indice != -1) {
        inserirElemento(&novaLista, lista->elementos[indice].dado);
        indice = lista->elementos[indice].proximo;
    }

    return novaLista;
}

ListaLigadaEstatica construirListaL1b(ListaLigadaEstatica *lista) {
    ListaLigadaEstatica novaLista;
    inicializarLista(&novaLista);

    int indice = lista->cabeca;
    while (indice != -1) {
        int dado = lista->elementos[indice].dado;
        inserirElemento(&novaLista, dado);
        indice = lista->elementos[indice].proximo;
    }

    return novaLista;
}