// main.c

#include "arquivo.h"

int main() {
    ListaLinearSequencial lista = criarLista();

    // Inserir elementos ao final
    Elemento elemento1 = {1};
    Elemento elemento2 = {2};

    inserirAoFinal(&lista, elemento1);
    inserirAoFinal(&lista, elemento2);

    // Inserir elementos ordenados
    Elemento elemento3 = {3};
    Elemento elemento4 = {0};

    inserirOrdenado(&lista, elemento3);
    inserirOrdenado(&lista, elemento4);

    // Imprimir lista
    printf("Lista: ");
    imprimirLista(lista);

    // Eliminar elemento pela chave
    eliminarPelaChave(&lista, 2);

    // Imprimir lista após exclusão
    printf("Lista apos exclusao: ");
    imprimirLista(lista);

    return 0;
}