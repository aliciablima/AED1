#ifndef DEQUE_H
#define DEQUE_H

typedef struct Soldado {
    int codigo;
    char nome[50];
    char grau[20];
} Soldado;

typedef struct Node {
    Soldado soldado;
    struct Node *anterior;
    struct Node *proximo;
} Node;

typedef struct Deque {
    Node *inicio;
    Node *fim;
    int tamanho;
} Deque;

Deque* criarDeque();
int inserirInicio(Deque *D, Soldado x);
int inserirFim(Deque *D, Soldado x);
Soldado removerInicio(Deque *D);
Soldado removerFim(Deque *D);
Soldado primeiro(Deque *D);
Soldado ultimo(Deque *D);
int contar(Deque *D);
int vazia(Deque *D);
void liberarDeque(Deque *D);

#endif