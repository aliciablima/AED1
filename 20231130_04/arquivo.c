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

ListaLigadaEstatica copiarLista(ListaLigadaEstatica *lista) {
    ListaLigadaEstatica novaLista;
    inicializarLista(&novaLista);

    int indice = lista->cabeca;
    while (indice != -1) {
        inserirElemento(&novaLista, lista->elementos[indice].dado);
        indice = lista->elementos[indice].proximo;
    }

    return novaLista;
}

ListaLigadaEstatica concatenarListas(ListaLigadaEstatica *lista1, ListaLigadaEstatica *lista2) {
    ListaLigadaEstatica novaLista;
    inicializarLista(&novaLista);

    int indice = lista1->cabeca;
    while (indice != -1) {
        inserirElemento(&novaLista, lista1->elementos[indice].dado);
        indice = lista1->elementos[indice].proximo;
    }

    indice = lista2->cabeca;
    while (indice != -1) {
        inserirElemento(&novaLista, lista2->elementos[indice].dado);
        indice = lista2->elementos[indice].proximo;
    }

    return novaLista;
}

ListaLigadaEstatica intercalarListas(ListaLigadaEstatica *lista1, ListaLigadaEstatica *lista2) {
    ListaLigadaEstatica novaLista;
    inicializarLista(&novaLista);

    int indice1 = lista1->cabeca;
    int indice2 = lista2->cabeca;

    while (indice1 != -1 || indice2 != -1) {
        if (indice1 != -1) {
            inserirElemento(&novaLista, lista1->elementos[indice1].dado);
            indice1 = lista1->elementos[indice1].proximo;
        }

        if (indice2 != -1) {
            inserirElemento(&novaLista, lista2->elementos[indice2].dado);
            indice2 = lista2->elementos[indice2].proximo;
        }
    }

    return novaLista;
}