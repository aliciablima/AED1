#include "arquivo.h"

int main() {
    ListaLigadaEstatica lista;
    inicializarLista(&lista);

    inserirElemento(&lista, 1);
    inserirElemento(&lista, 2);
    inserirElemento(&lista, 3);

    printf("Lista original: ");
    percorrerLista(&lista);

    ListaLigadaEstatica listaL1a = construirListaL1a(&lista);
    printf("Lista L1a: ");
    percorrerLista(&listaL1a);

    ListaLigadaEstatica listaL1b = construirListaL1b(&lista);
    printf("Lista L1b: ");
    percorrerLista(&listaL1b);

    return 0;
}