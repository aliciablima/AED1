#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int* elementos;
    int quantidade;
} LISTA;

LISTA criarLista(int tamanho);
void liberarLista(LISTA* lista);
void inserirElemento(LISTA* lista, int elemento);
void imprimirLista(LISTA lista);
int buscarSequencial(LISTA lista, int elemento);
int buscarSequencialOrdenada(LISTA lista, int elemento);
int buscaBinariaIterativa(LISTA lista, int elemento);
int buscarMaiorElemento(LISTA lista);
int buscarMenorElemento(LISTA lista);
int calcularSoma(LISTA lista);
int calcularProduto(LISTA lista);
int buscaBinariaRecursiva(LISTA lista, int elemento, int inicio, int fim, int* comparacoes);

#endif