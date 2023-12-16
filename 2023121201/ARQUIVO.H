#ifndef ARQUIVO_H
#define ARQUIVO_H

typedef struct Aluno {
    int matricula;
    char nome[50];
    int idade;
} Aluno;

typedef struct No {
    Aluno aluno;
    struct No* proximo;
} No;

typedef struct Lista {
    No* inicio;
    int tamanho;
} Lista;

void inicializarLista(Lista* lista);
void reiniciarLista(Lista* lista);
int quantidadeElementos(Lista* lista);
int listaCheia(Lista* lista);
int listaVazia(Lista* lista);
void exibirLista(Lista* lista);
void inserirElementoOrdenado(Lista* lista, Aluno aluno);
void excluirElemento(Lista* lista, int matricula);

#endif