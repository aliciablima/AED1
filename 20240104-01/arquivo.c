#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"

Deque* criarDeque() {
    Deque *D = (Deque*)malloc(sizeof(Deque));
    if (D == NULL) {
        exit(EXIT_FAILURE);
    }
    D->inicio = NULL;
    D->fim = NULL;
    D->tamanho = 0;
    return D;
}

Node* criarNode(Soldado x) {
    Node *novoNode = (Node*)malloc(sizeof(Node));
    if (novoNode == NULL) {
        exit(EXIT_FAILURE);
    }
    novoNode->soldado = x;
    novoNode->anterior = NULL;
    novoNode->proximo = NULL;
    return novoNode;
}

int inserirInicio(Deque *D, Soldado x) {
    Node *novoNode = criarNode(x);
    if (D->inicio == NULL) {
        D->inicio = D->fim = novoNode;
    } else {
        novoNode->proximo = D->inicio;
        D->inicio->anterior = novoNode;
        D->inicio = novoNode;
    }
    D->tamanho++;
    return 1;  // Inserção bem-sucedida
}

int inserirFim(Deque *D, Soldado x) {
    Node *novoNode = criarNode(x);
    if (D->fim == NULL) {
        D->inicio = D->fim = novoNode;
    } else {
        novoNode->anterior = D->fim;
        D->fim->proximo = novoNode;
        D->fim = novoNode;
    }
    D->tamanho++;
    return 1;  // Inserção bem-sucedida
}

Soldado removerInicio(Deque *D) {
    if (D->inicio == NULL) {
        Soldado soldadoNull = {0, "", ""};
        return soldadoNull;  // Não há elementos para remover
    }

    Node *temp = D->inicio;
    Soldado soldadoRemovido = temp->soldado;

    if (D->inicio == D->fim) {
        D->inicio = D->fim = NULL;
    } else {
        D->inicio = D->inicio->proximo;
        D->inicio->anterior = NULL;
    }

    free(temp);
    D->tamanho--;
    return soldadoRemovido;
}

Soldado removerFim(Deque *D) {
    if (D->fim == NULL) {
        Soldado soldadoNull = {0, "", ""};
        return soldadoNull;  // Não há elementos para remover
    }

    Node *temp = D->fim;
    Soldado soldadoRemovido = temp->soldado;

    if (D->inicio == D->fim) {
        D->inicio = D->fim = NULL;
    } else {
        D->fim = D->fim->anterior;
        D->fim->proximo = NULL;
    }

    free(temp);
    D->tamanho--;
    return soldadoRemovido;
}

Soldado primeiro(Deque *D) {
    if (D->inicio == NULL) {
        Soldado soldadoNull = {0, "", ""};
        return soldadoNull;  // Não há elementos
    }
    return D->inicio->soldado;
}

Soldado ultimo(Deque *D) {
    if (D->fim == NULL) {
        Soldado soldadoNull = {0, "", ""};
        return soldadoNull;  // Não há elementos
    }
    return D->fim->soldado;
}

int contar(Deque *D) {
    return D->tamanho;
}

int vazia(Deque *D) {
    return D->inicio == NULL;
}

void liberarDeque(Deque *D) {
    Node *atual = D->inicio;
    Node *proximo;
    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    free(D);
}