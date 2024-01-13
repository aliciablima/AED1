#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "paciente.h"

#define TABLE_SIZE 100 // Tamanho da tabela hash (ajuste conforme necessário)

typedef struct {
    Paciente* paciente;
    struct Node* next;
} Node;

typedef struct {
    Node* array[TABLE_SIZE];
} HashTable;

void inicializar_tabela(HashTable* tabela);
void inserir_paciente(HashTable* tabela, Paciente* paciente);
Paciente* buscar_paciente(const HashTable* tabela, int codigo);
void remover_paciente(HashTable* tabela, int codigo);
void imprimir_tabela(const HashTable* tabela);
void liberar_tabela(HashTable* tabela);

#endif