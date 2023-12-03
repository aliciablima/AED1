// listaAlunos.c
#include <stdio.h>
#include "aluno.h"

void inicializarLista(ListaAlunos *lista) {
    lista->quantidade = 0;
}

void liberarLista(ListaAlunos *lista) {
    lista->quantidade = 0;
}

int quantidadeElementos(ListaAlunos *lista) {
    return lista->quantidade;
}

int listaCheia(ListaAlunos *lista) {
    return lista->quantidade == MAX_ALUNOS;
}

int listaVazia(ListaAlunos *lista) {
    return lista->quantidade == 0;
}

void exibirLista(ListaAlunos *lista) {
    for (int i = 0; i < lista->quantidade; i++) {
        printf("Matricula: %d, Nome: %s, Idade: %d\n", lista->alunos[i].matricula, lista->alunos[i].nome, lista->alunos[i].idade);
    }
}

void inserirElemento(ListaAlunos *lista, Aluno aluno) {
    if (listaCheia(lista)) {
        printf("Lista cheia. Nao foi possivel inserir o elemento.\n");
        return;
    }

    int i = lista->quantidade - 1;

    while (i >= 0 && lista->alunos[i].matricula > aluno.matricula) {
        lista->alunos[i + 1] = lista->alunos[i];
        i--;
    }

    lista->alunos[i + 1] = aluno;
    lista->quantidade++;
}

void excluirElemento(ListaAlunos *lista, int matricula) {
    if (listaVazia(lista)) {
        printf("Lista vazia. Nao foi possivel excluir o elemento.\n");
        return;
    }

    int i = 0;

    while (i < lista->quantidade && lista->alunos[i].matricula != matricula) {
        i++;
    }

    if (i == lista->quantidade) {
        printf("Elemento com matricula %d nao encontrado.\n", matricula);
        return;
    }

    for (int j = i; j < lista->quantidade - 1; j++) {
        lista->alunos[j] = lista->alunos[j + 1];
    }

    lista->quantidade--;
}

void alterarMatricula(ListaAlunos *lista, int matricula, int novaMatricula) {
    if (listaVazia(lista)) {
        printf("Lista vazia. Nao foi possivel alterar a matricula.\n");
        return;
    }

    int i = 0;

    while (i < lista->quantidade && lista->alunos[i].matricula != matricula) {
        i++;
    }

    if (i == lista->quantidade) {
        printf("Elemento com matricula %d nao encontrado.\n", matricula);
        return;
    }

    lista->alunos[i].matricula = novaMatricula;
}