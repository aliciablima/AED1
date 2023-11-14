#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int *vetor;
    int quantidade;
} LISTA;

LISTA criar_lista(int quantidade);
void liberar_lista(LISTA *lista);
void inserir_elemento(LISTA *lista, int elemento);
void inserir_elemento_ordenado(LISTA *lista, int elemento);
void imprimir_lista_iterativo(LISTA lista);
int busca_binaria_recursiva(LISTA lista, int elemento, int inicio, int fim);
void imprimir_lista_recursivo(LISTA lista, int indice);
int buscar_maior_recursivo(LISTA lista, int indice);
int buscar_menor_recursivo(LISTA lista, int indice);
int somar_elementos_recursivo(LISTA lista, int indice);
int multiplicar_elementos_recursivo(LISTA lista, int indice);

#endif