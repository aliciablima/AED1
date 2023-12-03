#ifndef ARQUIVO_H
#define ARQUIVO_H

typedef struct {
    int dado;
    int proximo; // Índice do próximo elemento na lista
} Elemento;

typedef struct {
    Elemento elementos[100]; // Tamanho máximo da lista estática (ajuste conforme necessário)
    int cabeca; // Índice do primeiro elemento na lista
    int livre; // Índice do primeiro elemento livre na lista
} ListaLigadaEstatica;

void inicializarLista(ListaLigadaEstatica *lista);
void inserirElemento(ListaLigadaEstatica *lista, int dado);
void percorrerLista(ListaLigadaEstatica *lista);
ListaLigadaEstatica copiarLista(ListaLigadaEstatica *lista);
ListaLigadaEstatica concatenarListas(ListaLigadaEstatica *lista1, ListaLigadaEstatica *lista2);
ListaLigadaEstatica intercalarListas(ListaLigadaEstatica *lista1, ListaLigadaEstatica *lista2);

#endif