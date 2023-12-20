#include "fila.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicializarFila(Fila* fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

int tamanhoFila(Fila* fila) {
    int tamanho = 0;
    No* atual = fila->inicio;
    while (atual != NULL) {
        tamanho++;
        atual = atual->proximo;
    }
    return tamanho;
}

void enfileirar(Fila* fila, Aviao aviao) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        fprintf(stderr, "Erro ao alocar memória para novo nó.\n");
        exit(EXIT_FAILURE);
    }
    novoNo->aviao = aviao;
    novoNo->proximo = NULL;

    if (fila->inicio == NULL) {
        fila->inicio = novoNo;
    } else {
        fila->fim->proximo = novoNo;
    }
    fila->fim = novoNo;
}

Aviao desenfileirar(Fila* fila) {
    if (fila->inicio == NULL) {
        fprintf(stderr, "A fila está vazia.\n");
        exit(EXIT_FAILURE);
    }

    No* noRemovido = fila->inicio;
    Aviao aviao = noRemovido->aviao;

    fila->inicio = fila->inicio->proximo;
    free(noRemovido);

    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }

    return aviao;
}

void listarFila(Fila* fila) {
    No* atual = fila->inicio;
    printf("Aviões na fila:\n");
    while (atual != NULL) {
        printf("Nome: %s, Identificador: %d\n", atual->aviao.nome, atual->aviao.identificador);
       
        atual = atual->proximo;
    }
}

Aviao frenteFila(Fila* fila) {
    if (fila->inicio == NULL) {
        fprintf(stderr, "A fila está vazia.\n");
        exit(EXIT_FAILURE);
    }
    return fila->inicio->aviao;
}