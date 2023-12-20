#ifndef AVIAO_H
#define AVIAO_H

typedef struct {
    int id;
    char nome[50];
   
} Aviao;

typedef struct Node {
    Aviao aviao;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Pilha;

void inicializarPilha(Pilha* pilha);
int pilhaVazia(Pilha* pilha);
void empilhar(Pilha* pilha, Aviao aviao);
Aviao desempilhar(Pilha* pilha);
Aviao topoDaPilha(Pilha* pilha);

#endif 