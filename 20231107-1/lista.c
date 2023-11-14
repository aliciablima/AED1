#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

LISTA criar_lista(int quantidade) {
    LISTA nova_lista;
    nova_lista.vetor = (int *)malloc(quantidade * sizeof(int));
    nova_lista.quantidade = 0;
    return nova_lista;
}

void liberar_lista(LISTA *lista) {
    free(lista->vetor);
    lista->quantidade = 0;
}

void inserir_elemento(LISTA *lista, int elemento) {
    lista->vetor[lista->quantidade] = elemento;
    lista->quantidade++;
}

void inserir_elemento_ordenado(LISTA *lista, int elemento) {
    int i, posicao;
    for (i = 0; i < lista->quantidade; i++) {
        if (elemento < lista->vetor[i])
            break;
    }
    posicao = i;

    for (i = lista->quantidade; i > posicao; i--) {
        lista->vetor[i] = lista->vetor[i - 1];
    }

    lista->vetor[posicao] = elemento;
    lista->quantidade++;
}

void imprimir_lista_iterativo(LISTA lista) {
    for (int i = 0; i < lista.quantidade; i++) {
        printf("%d ", lista.vetor[i]);
    }
    printf("\n");
}

int busca_binaria_recursiva(LISTA lista, int elemento, int inicio, int fim) {
    if (inicio > fim)
        return -1;

    int meio = (inicio + fim) / 2;

    if (lista.vetor[meio] == elemento)
        return meio;
    else if (lista.vetor[meio] < elemento)
        return busca_binaria_recursiva(lista, elemento, meio + 1, fim);
    else
        return busca_binaria_recursiva(lista, elemento, inicio, meio - 1);
}

void imprimir_lista_recursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade)
        return;

    printf("%d ", lista.vetor[indice]);
    imprimir_lista_recursivo(lista, indice + 1);
}

int buscar_maior_recursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade - 1)
        return lista.vetor[indice];

    int maior_resto_da_lista = buscar_maior_recursivo(lista, indice + 1);
    return (lista.vetor[indice] > maior_resto_da_lista) ? lista.vetor[indice] : maior_resto_da_lista;
}

int buscar_menor_recursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade - 1)
        return lista.vetor[indice];

    int menor_resto_da_lista = buscar_menor_recursivo(lista, indice + 1);
    return (lista.vetor[indice] < menor_resto_da_lista) ? lista.vetor[indice] : menor_resto_da_lista;
}

int somar_elementos_recursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade)
        return 0;

    return lista.vetor[indice] + somar_elementos_recursivo(lista, indice + 1);
}

int multiplicar_elementos_recursivo(LISTA lista, int indice) {
    if (indice == lista.quantidade)
        return 1;

    return lista.vetor[indice] * multiplicar_elementos_recursivo(lista, indice + 1);
}