#include "arquivo.h"
#include <stdio.h>

int main() {
    Lista lista;
    inicializarLista(&lista);

    Aluno aluno1 = {1014567766, "Joao", 20};
    Aluno aluno2 = {1025445521, "Maria", 22};
    Aluno aluno3 = {1031235488, "Pedro", 21};

    inserirElementoOrdenado(&lista, aluno1);
    inserirElementoOrdenado(&lista, aluno2);
    inserirElementoOrdenado(&lista, aluno3);

    printf("Quantidade de elementos: %d\n", quantidadeElementos(&lista));
    exibirLista(&lista);

    excluirElemento(&lista, 102);

    printf("Quantidade de elementos: %d\n", quantidadeElementos(&lista));
    exibirLista(&lista);

    reiniciarLista(&lista);

    return 0;
}
