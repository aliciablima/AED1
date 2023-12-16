#include <stdio.h>
#include "arquivo.h"

int main() {
    LISTA_LIGADA_DINAMICA lista;
    inicializarLista(&lista);

    
    inserirElemento(&lista, 2);
    inserirElemento(&lista, 3);
    inserirElemento(&lista, 4);
    inserirElemento(&lista, 5);

    printf("Lista original: ");
    imprimirLista(lista);

    LISTA_LIGADA_DINAMICA novaListaA = permutaA(lista);
    printf("Permuta A: ");
    imprimirLista(novaListaA);

    LISTA_LIGADA_DINAMICA novaListaB = permutaB(lista);
    printf("Permuta B: ");
    imprimirLista(novaListaB);

    LISTA_LIGADA_DINAMICA copiaLista = copiarLista(lista);
    printf("Copia da lista: ");
    imprimirLista(copiaLista);

    LISTA_LIGADA_DINAMICA lista2;
    inicializarLista(&lista2);

    inserirElemento(&lista2, 6);
    inserirElemento(&lista2, 7);
    inserirElemento(&lista2, 8);

    LISTA_LIGADA_DINAMICA concatenada = concatenarListas(lista, lista2);
    printf("Lista concatenada: ");
    imprimirLista(concatenada);

    LISTA_LIGADA_DINAMICA intercalada = intercalarListas(lista, lista2);
    printf("Lista intercalada: ");
    imprimirLista(intercalada);

    return 0;
}