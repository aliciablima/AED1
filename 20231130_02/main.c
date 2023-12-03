// main.c
#include <stdio.h>
#include "aluno.h"

int main() {
    ListaAlunos lista;
    Aluno aluno;

    inicializarLista(&lista);

    aluno.matricula = 123;
    strcpy(aluno.nome, "Joao");
    aluno.idade = 20;
    inserirElemento(&lista, aluno);

    aluno.matricula = 456;
    strcpy(aluno.nome, "Maria");
    aluno.idade = 22;
    inserirElemento(&lista, aluno);

    aluno.matricula = 789;
    strcpy(aluno.nome, "Pedro");
    aluno.idade = 21;
    inserirElemento(&lista, aluno);

    printf("Quantidade de elementos: %d\n", quantidadeElementos(&lista));
    printf("Lista cheia: %s\n", listaCheia(&lista) ? "Sim" : "Nao");
    printf("Lista vazia: %s\n", listaVazia(&lista) ? "Sim" : "Nao");

    printf("\nElementos da lista:\n");
    exibirLista(&lista);

    printf("\nExcluindo elemento com matricula 456:\n");
    excluirElemento(&lista, 456);
    exibirLista(&lista);

    printf("\nAlterando matricula de 789 para 999:\n");
    alterarMatricula(&lista, 789, 999);
    exibirLista(&lista);

    liberarLista(&lista);

    return 0;
}