#include "arquivo.h"

int main() {
    ListaLigadaEstatica lista1;
    inicializarLista(&lista1);

    // Adicione elementos à lista1 conforme necessário
    inserirElemento(&lista1, 1);
    inserirElemento(&lista1, 2);
    inserirElemento(&lista1, 3);

    printf("Lista original 1: ");
    percorrerLista(&lista1);

    // a) Copiar uma lista l1 para uma lista l2
    ListaLigadaEstatica lista2 = copiarLista(&lista1);
    printf("Lista copiada 2: ");
    percorrerLista(&lista2);

    // b) Concatenar uma lista l1 com uma lista l2
    ListaLigadaEstatica listaConcatenada = concatenarListas(&lista1, &lista2);
    printf("Lista concatenada: ");
    percorrerLista(&listaConcatenada);

    // c) Intercalar l1 e l2
    ListaLigadaEstatica listaIntercalada = intercalarListas(&lista1, &lista2);
    printf("Lista intercalada: ");
    percorrerLista(&listaIntercalada);

    return 0;
}