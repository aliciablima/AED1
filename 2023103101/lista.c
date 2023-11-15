#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

LISTA criarLista(int tamanho) {
    LISTA novaLista;
    novaLista.elementos = (int*)malloc(tamanho * sizeof(int));
    novaLista.quantidade = 0;
    return novaLista;
}

void liberarLista(LISTA* lista) {
    free(lista->elementos);
    lista->quantidade = 0;
}

void inserirElemento(LISTA* lista, int elemento) {
    lista->elementos[lista->quantidade] = elemento;
    lista->quantidade++;
}

void imprimirLista(LISTA lista) {
    printf("Elementos da Lista:\n");
    for (int i = 0; i < lista.quantidade; i++) {
        printf("%d ", lista.elementos[i]);
    }
    printf("\n");
}

int buscarSequencial(LISTA lista, int elemento) {
    for (int i = 0; i < lista.quantidade; i++) {
        if (lista.elementos[i] == elemento) {
            return i;
        }
    }
    return -1;
}

int buscarSequencialOrdenada(LISTA lista, int elemento) {
    for (int i = 0; i < lista.quantidade; i++) {
        if (lista.elementos[i] == elemento) {
            return i;
        } else if (lista.elementos[i] > elemento) {
            return -1; // Elemento não encontrado
        }
    }
    return -1; // Elemento não encontrado
}

int buscaBinariaIterativa(LISTA lista, int elemento) {
    int inicio = 0;
    int fim = lista.quantidade - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (lista.elementos[meio] == elemento) {
            return meio;
        } else if (lista.elementos[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1; // Elemento não encontrado
}

int buscarMaiorElemento(LISTA lista) {
    int maior = lista.elementos[0];
    for (int i = 1; i < lista.quantidade; i++) {
        if (lista.elementos[i] > maior) {
            maior = lista.elementos[i];
        }
    }
    return maior;
}

int buscarMenorElemento(LISTA lista) {
    int menor = lista.elementos[0];
    for (int i = 1; i < lista.quantidade; i++) {
        if (lista.elementos[i] < menor) {
            menor = lista.elementos[i];
        }
    }
    return menor;
}

int calcularSoma(LISTA lista) {
    int soma = 0;
    for (int i = 0; i < lista.quantidade; i++) {
        soma += lista.elementos[i];
    }
    return soma;
}

int calcularProduto(LISTA lista) {
    int produto = 1;
    for (int i = 0; i < lista.quantidade; i++) {
        produto *= lista.elementos[i];
    }
    return produto;
}
int buscaBinariaRecursiva(LISTA lista, int elemento, int inicio, int fim, int* comparacoes) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        (*comparacoes)++; 
        if (lista.elementos[meio] == elemento) {
            return meio;
        } else if (lista.elementos[meio] < elemento) {
            return buscaBinariaRecursiva(lista, elemento, meio + 1, fim, comparacoes);
        } else {
            return buscaBinariaRecursiva(lista, elemento, inicio, meio - 1, comparacoes);
        }
    }
    return -1; 
}