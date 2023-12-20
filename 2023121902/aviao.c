#include "aviao.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarPilha(Pilha* pilha) {
    pilha->top = NULL;
}

int pilhaVazia(Pilha* pilha) {
    return pilha->top == NULL;
}

void empilhar(Pilha* pilha, Aviao aviao) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        exit(EXIT_FAILURE);
    }

    newNode->aviao = aviao;
    newNode->next = pilha->top;
    pilha->top = newNode;
}

Aviao desempilhar(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        fprintf(stderr, "Erro: Pilha vazia.\n");
        exit(EXIT_FAILURE);
    }

    Node* temp = pilha->top;
    Aviao aviao = temp->aviao;
    pilha->top = temp->next;
    free(temp);

    return aviao;
}

Aviao topoDaPilha(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        fprintf(stderr, "Erro: Pilha vazia.\n");
        exit(EXIT_FAILURE);
    }

    return pilha->top->aviao;
}