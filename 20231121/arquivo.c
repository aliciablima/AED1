#include "arquivo.h"
#include <stdio.h>

ListaLinearSequencial criarLista() {
    ListaLinearSequencial lista;
    lista.tamanho = 0;
    return lista;
}

void inserirAoFinal(ListaLinearSequencial *lista, Elemento elemento) {
    if (lista->tamanho < MAX_TAMANHO) {
        lista->elementos[lista->tamanho] = elemento;
        lista->tamanho++;
    } else {
        printf("A lista esta cheia. Nao eh possível adicionar mais elementos.\n");
    }
}

void inserirOrdenado(ListaLinearSequencial *lista, Elemento elemento) {
    int i = lista->tamanho - 1;

    while (i >= 0 && lista->elementos[i].chave > elemento.chave) {
        lista->elementos[i + 1] = lista->elementos[i];
        i--;
    }

    lista->elementos[i + 1] = elemento;
    lista->tamanho++;
}

void eliminarPelaChave(ListaLinearSequencial *lista, int chave) {
    int i = 0;

    while (i < lista->tamanho && lista->elementos[i].chave != chave) {
        i++;
    }

    if (i < lista->tamanho) {
        // Elemento encontrado, move os elementos restantes para preencher a lacuna
        for (int j = i; j < lista->tamanho - 1; j++) {
            lista->elementos[j] = lista->elementos[j + 1];
        }

        lista->tamanho--;
    } else {
        printf("Elemento com chave %d nao encontrado na lista.\n", chave);
    }
}

void imprimirLista(ListaLinearSequencial lista) {
    for (int i = 0; i < lista.tamanho; i++) {
        printf("%d ", lista.elementos[i].chave);
        // Imprima outros campos necessários para seus elementos
    }

    printf("\n");
}