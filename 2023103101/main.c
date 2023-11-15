#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "lista.h"

int main() {
    srand(time(NULL));

    // 1. Perguntar ao usuário o tamanho de uma LISTA, criar a lista1 e preencher valores na lista.
    int tamanhoLista;
    printf("Digite o tamanho da Lista 1: ");
    scanf("%d", &tamanhoLista);

    LISTA lista1 = criarLista(tamanhoLista);
    for (int i = 0; i < tamanhoLista; i++) {
        inserirElemento(&lista1, rand() % 100); 
    }

    // 2. Imprimir todos os elementos da LISTA.
    imprimirLista(lista1);

    // 3. Perguntar para o usuário sobre um número que ele quer buscar na LISTA
    int elementoBusca;
    printf("Digite um numero para buscar na Lista 1: ");
    scanf("%d", &elementoBusca);

    // Mostrar o resultado da busca sequencial.
    int posicao = buscarSequencial(lista1, elementoBusca);
    if (posicao != -1) {
        printf("Elemento encontrado na posicao %d.\n", posicao);
    } else {
        printf("Elemento nao encontrado na Lista 1.\n");
    }

    // 4. Criar uma segunda LISTA2 de tamanho 30 e preencher seus elementos de forma ordenada.
    LISTA lista2 = criarLista(30);
    for (int i = 0; i < 30; i++) {
        inserirElemento(&lista2, i * 2); 
    }

    // 5. Imprimir todos os elementos da segunda LISTA.
    imprimirLista(lista2);

    // 6. Perguntar para o usuário sobre um número que ele quer buscar na segunda LISTA2
    printf("Digite um numero para buscar na Lista 2: ");
    scanf("%d", &elementoBusca);

    // Mostrar o resultado da busca sequencial, busca sequencial ordenada e busca binaria interativa.
    posicao = buscarSequencial(lista2, elementoBusca);
    if (posicao != -1) {
        printf("Elemento encontrado na posicao (Busca Sequencial) %d.\n", posicao);
    } else {
        printf("Elemento nao encontrado na Lista 2 (Busca Sequencial).\n");
    }

    posicao = buscarSequencialOrdenada(lista2, elementoBusca);
    if (posicao != -1) {
        printf("Elemento encontrado na posicao (Busca Sequencial Ordenada) %d.\n", posicao);
    } else {
        printf("Elemento nao encontrado na Lista 2 (Busca Sequencial Ordenada).\n");
    }
    posicao = buscaBinariaIterativa(lista2, elementoBusca);
    if (posicao != -1) {
        printf("Elemento encontrado na posicao (Busca Binaria Iterativa) %d.\n", posicao);
    } else {
        printf("Elemento nao encontrado na Lista 2 (Busca Binaria Iterativa).\n");
    }

    int comparacoes;

    // Busca Sequencial
    posicao = buscarSequencial(lista1, elementoBusca);
    if (posicao != -1) {
        printf("Elemento encontrado na posição (Busca Sequencial) %d. Comparacoes: %d\n", posicao, posicao + 1);
    } else {
        printf("Elemento nao encontrado na Lista 1 (Busca Sequencial). Comparacoes: %d\n", tamanhoLista);
    }

    // Busca Sequencial Ordenada
    comparacoes = buscarSequencialOrdenada(lista2, elementoBusca);
    if (comparacoes != -1) {
        printf("Elemento encontrado na posicao (Busca Sequencial Ordenada) %d. Comparacoes: %d\n", posicao, comparacoes);
    } else {
        printf("Elemento nao encontrado na Lista 2 (Busca Sequencial Ordenada). Comparacoes: %d\n", tamanhoLista);
    }

    // Busca Binária Iterativa
    comparacoes = buscaBinariaIterativa(lista2, elementoBusca);
    if (comparacoes != -1) {
        printf("Elemento encontrado na posicao (Busca Binária Iterativa) %d. Comparacoes: %d\n", posicao, comparacoes);
    } else {
        printf("Elemento nao encontrado na Lista 2 (Busca Binaria Iterativa). Comparacoes: %d\n", tamanhoLista);
    }

    // 8. Imprimir o maior elemento da primeira LISTA.
    printf("Maior elemento da Lista 1: %d\n", buscarMaiorElemento(lista1));
    // 9. Imprimir o menor elemento da primeira LISTA.
    printf("Menor elemento da Lista 1: %d\n", buscarMenorElemento(lista1));
    // 10. Imprimir a soma dos elementos da primeira LISTA.
    printf("Soma dos elementos da Lista 1: %d\n", calcularSoma(lista1));

    // 11. Imprimir o produto dos elementos da primeira LISTA.
    printf("Produto dos elementos da Lista 1: %d\n", calcularProduto(lista1));

    int comparacoesRecursivas = 0;
    posicao = buscaBinariaRecursiva(lista2, elementoBusca, 0, lista2.quantidade - 1, &comparacoesRecursivas);
    if (posicao != -1) {
        printf("Elemento encontrado na posicao (Busca Binaria Recursiva) %d. Comparacoes: %d\n", posicao, comparacoesRecursivas);
    } else {
        printf("Elemento nao encontrado na Lista 2 (Busca Binaria Recursiva). Comparacoes: %d\n", comparacoesRecursivas);
    }
    liberarLista(&lista1);
    liberarLista(&lista2);
    return 0;
}