#include "arquivo.h"
#include <stdio.h>

int main() {
    ListaAlunos lista;

    // Inicializar a lista
    inicializarLista(&lista);

    // Inserir elementos para teste
    inserirElementoOrdenado(&lista, 20);
    inserirElementoOrdenado(&lista, 10);
    inserirElementoOrdenado(&lista, 30);

    // Exibir elementos da lista
    exibirLista(&lista);

    // Verificar se a lista está cheia
    if (listaCheia(&lista)) {
        printf("A lista esta cheia.\n");
    } else {
        printf("A lista nao esta cheia.\n");
    }

    // Verificar se a lista está vazia
    if (listaVazia(&lista)) {
        printf("A lista esta vazia.\n");
    } else {
        printf("A lista nao esta vazia.\n");
    }

    // Excluir um elemento da lista
    excluirElemento(&lista, 10);

    // Alterar o valor de uma matrícula
    alterarMatricula(&lista, 20, 25);

    // Exibir elementos da lista após as operações
    exibirLista(&lista);

    return 0;
}