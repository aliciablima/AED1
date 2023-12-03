#include "arquivo.h"
#include <stdio.h>

void inicializarLista(ListaAlunos *lista) {
    lista->quantidade = 0;
}

void liberarLista(ListaAlunos *lista) {

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
    printf("Elementos da lista: ");
    for (int i = 0; i < lista->quantidade; i++) {
        printf("%d ", lista->elementos[i]);
    }
    printf("\n");
}

void inserirElementoOrdenado(ListaAlunos *lista, int matricula) {
    if (listaCheia(lista)) {
        printf("A lista esta cheia. Insercao nao realizada.\n");
        return;
    }

    int i = lista->quantidade - 1;
    while (i >= 0 && lista->elementos[i] > matricula) {
        lista->elementos[i + 1] = lista->elementos[i];
        i--;
    }

    lista->elementos[i + 1] = matricula;
    lista->quantidade++;
}

void excluirElemento(ListaAlunos *lista, int matricula) {
    int i = 0;
    while (i < lista->quantidade && lista->elementos[i] != matricula) {
        i++;
    }

    if (i == lista->quantidade) {
        printf("Elemento %d nao encontrado na lista. Exclusao nao realizada.\n", matricula);
        return;
    }

    for (int j = i; j < lista->quantidade - 1; j++) {
        lista->elementos[j] = lista->elementos[j + 1];
    }

    lista->quantidade--;
}

void alterarMatricula(ListaAlunos *lista, int matriculaAtual, int novaMatricula) {
    int i = 0;
    while (i < lista->quantidade && lista->elementos[i] != matriculaAtual) {
        i++;
    }

    if (i == lista->quantidade) {
        printf("Matricula %d nao encontrada na lista. Alteracao nao realizada.\n", matriculaAtual);
        return;
    }

    lista->elementos[i] = novaMatricula;
}