#include "arquivo.h"
#include <stdio.h>

int main() {
    Lista listaA, listaB, listaC;
    inicializarLista(&listaA);
    inicializarLista(&listaB);
    inicializarLista(&listaC);

    Aluno aluno1 = {1014567766, "Joao", 20};
    Aluno aluno2 = {1025445521, "Maria", 22};
    Aluno aluno3 = {1031235488, "Pedro", 21};

    inserirElementoOrdenado(&listaA, aluno1);
    inserirElementoOrdenado(&listaA, aluno2);
    inserirElementoOrdenado(&listaA, aluno3);

    printf("Quantidade de elementos na lista A: %d\n", quantidadeElementos(&listaA));
    exibirLista(&listaA);

    reiniciarLista(&listaA);
    reiniciarLista(&listaB);
    reiniciarLista(&listaC);

    return 0;
}