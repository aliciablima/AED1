#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

void inicializar_tabela(HashTable* tabela) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        tabela->array[i] = NULL;
    }
}

int calcular_indice(int codigo) {
    return codigo % TABLE_SIZE;
}

void inserir_paciente(HashTable* tabela, Paciente* paciente) {
    int indice = calcular_indice(paciente->codigo);
    Node* novo_node = (Node*)malloc(sizeof(Node));
    if (novo_node != NULL) {
        novo_node->paciente = paciente;
        novo_node->next = tabela->array[indice];
        tabela->array[indice] = novo_node;
    }
}

Paciente* buscar_paciente(const HashTable* tabela, int codigo) {
    int indice = calcular_indice(codigo);
    Node* atual = tabela->array[indice];
    while (atual != NULL) {
        if (atual->paciente->codigo == codigo) {
            return atual->paciente;
        }
        atual = atual->next;
    }
    return NULL; // Paciente não encontrado
}

void remover_paciente(HashTable* tabela, int codigo) {
    int indice = calcular_indice(codigo);
    Node* atual = tabela->array[indice];
    Node* anterior = NULL;

    while (atual != NULL) {
        if (atual->paciente->codigo == codigo) {
            if (anterior == NULL) {
                tabela->array[indice] = atual->next;
            } else {
                anterior->next = atual->next;
            }
            free(atual->paciente);
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->next;
    }
}

void imprimir_tabela(const HashTable* tabela) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* atual = tabela->array[i];
        while (atual != NULL) {
            imprimir_paciente(atual->paciente);
            atual = atual->next;
        }
    }
}

void liberar_tabela(HashTable* tabela) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Node* atual = tabela->array[i];
        while (atual != NULL) {
            Node* proximo = atual->next;
            liberar_paciente(atual->paciente);
            free(atual);
            atual = proximo;
        }
    }
}