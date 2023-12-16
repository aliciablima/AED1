#include "arquivo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

        // Verifica se a lista é circular para evitar loop infinito
        if (atual == lista->inicio) {
            break;
        }
    }
}

void inserirElementoOrdenado(Lista* lista, Aluno aluno) {
    No* novo = (No*)malloc(sizeof(No));
    novo->aluno = aluno;
    novo->proximo = NULL;

    if (lista->inicio == NULL || aluno.matricula < lista->inicio->aluno.matricula) {
        if (lista->inicio != NULL) {
            // Se a lista não estiver vazia, ajusta o último nó para apontar para o novo nó
            No* ultimo = lista->inicio;
            while (ultimo->proximo != lista->inicio) {
                ultimo = ultimo->proximo;
            }
            ultimo->proximo = novo;
        } else {
            novo->proximo = novo;  // Torna a lista circular
        }
        lista->inicio = novo;
    } else {
        No* atual = lista->inicio;

        while (atual->proximo != NULL && aluno.matricula > atual->proximo->aluno.matricula && atual->proximo != lista->inicio) {
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

    while (atual != NULL && atual->aluno.matricula != matricula && atual->proximo != lista->inicio) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual != NULL) {
        if (anterior == NULL) {
            if (lista->inicio->proximo == lista->inicio) {
                
                lista->inicio = NULL;
            } else {
                // Se o nó a ser removido é o início, ajusta o início
                lista->inicio = atual->proximo;
                
                No* ultimo = lista->inicio;
                while (ultimo->proximo != atual) {
                    ultimo = ultimo->proximo;
                }
                ultimo->proximo = lista->inicio;
            }
        } else {
            anterior->proximo = atual->proximo;
        }

        free(atual);
        lista->tamanho--;
    }
}