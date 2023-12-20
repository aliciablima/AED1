#ifndef FILA_H
#define FILA_H

typedef struct {
    char nome[50];
    int identificador;
    
} Aviao;

typedef struct No {
    Aviao aviao;
    struct No* proximo;
} No;

typedef struct {
    No* inicio;
    No* fim;
} Fila;

void inicializarFila(Fila* fila);
int tamanhoFila(Fila* fila);
void enfileirar(Fila* fila, Aviao aviao);
Aviao desenfileirar(Fila* fila);
void listarFila(Fila* fila);
Aviao frenteFila(Fila* fila);

#endif 