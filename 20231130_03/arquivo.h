#ifndef ARQUIVO_H
#define ARQUIVO_H

typedef struct {
    int dado;
    int proximo; 
} Elemento;

typedef struct {
    Elemento elementos[100]; 
    int cabeca; 
    int livre; 
} ListaLigadaEstatica;

void inicializarLista(ListaLigadaEstatica *lista);
void inserirElemento(ListaLigadaEstatica *lista, int dado);
void percorrerLista(ListaLigadaEstatica *lista);
ListaLigadaEstatica construirListaL1a(ListaLigadaEstatica *lista);
ListaLigadaEstatica construirListaL1b(ListaLigadaEstatica *lista);

#endif