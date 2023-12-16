#include "arquivo.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarLista(Lista* lista) {
    lista->inicio = NULL;
    lista->tamanho = 0;
}

void reiniciarLista(Lista* lista) {
    No* atual = lista->inicio;
    No* proximo;

    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    lista->inicio = NULL;
    lista->tamanho = 0;
}

int quantidadeElementos(Lista* lista) {
    return lista->tamanho;
}

int listaCheia(Lista* lista) {
    
    return 0;
}

int listaVazia(Lista* lista) {
    return lista->inicio == NULL;
}

void exibirLista(Lista* lista) {
    No* atual = lista->inicio;

    while (atual != NULL) {
        printf("Matricula: %d, Nome: %s, Idade: %d\n", atual->aluno.matricula, atual->aluno.nome, atual->aluno.idade);
        atual = atual->proximo;
    }
}

void inserirElementoOrdenado(Lista* lista, Aluno aluno) {
    No* novo = (No*)malloc(sizeof(No));
    novo->aluno = aluno;
    novo->proximo = NULL;

    if (lista->inicio == NULL || aluno.matricula < lista->inicio->aluno.matricula) {
        novo->proximo = lista->inicio;
        lista->inicio = novo;
    } else {
        No* atual = lista->inicio;

        while (atual->proximo != NULL && aluno.matricula > atual->proximo->aluno.matricula) {
            atual = atual->proximo;
        }

        novo->proximo = atual->proximo;
        atual->proximo = novo;
    }

    lista->tamanho++;
}

void excluirElemento(Lista* lista, int matricula) {
    No* atual = lista->inicio;
    No* anterior = NULL;

    while (atual != NULL && atual->aluno.matricula != matricula) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual != NULL) {
        if (anterior == NULL) {
            lista->inicio = atual->proximo;
        } else {
            anterior->proximo = atual->proximo;
        }

        free(atual);
        lista->tamanho--;
    }
}