#include <stdio.h>
#include "lista.h"

int main() {
    LISTA minha_lista = criar_lista(5);

    inserir_elemento(&minha_lista, 3);
    inserir_elemento(&minha_lista, 1);
    inserir_elemento(&minha_lista, 4);
    inserir_elemento(&minha_lista, 2);
    inserir_elemento(&minha_lista, 5);

    printf("Lista original: ");
    imprimir_lista_iterativo(minha_lista);

    int elemento_busca = 4;
    int posicao = busca_binaria_recursiva(minha_lista, elemento_busca, 0, minha_lista.quantidade - 1);

    if (posicao != -1)
        printf("%d encontrado na posicao %d\n", elemento_busca, posicao);
    else
        printf("%d nao encontrado na lista\n", elemento_busca);

    printf("Lista impressa recursivamente: ");
    imprimir_lista_recursivo(minha_lista, 0);
    printf("\n");

    printf("Maior elemento na lista: %d\n", buscar_maior_recursivo(minha_lista, 0));
    printf("Menor elemento na lista: %d\n", buscar_menor_recursivo(minha_lista, 0));
    printf("Soma de todos os elementos: %d\n", somar_elementos_recursivo(minha_lista, 0));
    printf("Produto de todos os elementos: %d\n", multiplicar_elementos_recursivo(minha_lista, 0));

    liberar_lista(&minha_lista);

    return 0;
}
