// arquivo.c
#include "arquivo.h"
#include <stdio.h>
#include <stdlib.h>

Turma criarTurma(int capacidade) {
    Turma turma;
    turma.alunos = (Aluno *)malloc(capacidade * sizeof(Aluno));
    turma.quantidade_alunos = 0;
    turma.capacidade = capacidade;
    return turma;
}

void inserirAluno(Turma *turma, Aluno aluno) {
    if (turma->quantidade_alunos < turma->capacidade) {
        turma->alunos[turma->quantidade_alunos++] = aluno;
        printf("Aluno inserido com sucesso.\n");
    } else {
        printf("A turma esta cheia. Impossivel adicionar mais alunos.\n");
    }
}

void liberarTurma(Turma *turma) {
    free(turma->alunos);
    turma->quantidade_alunos = 0;
    turma->capacidade = 0;
}

void buscarAlunoPorCodigo(Turma turma, int codigo) {
    for (int i = 0; i < turma.quantidade_alunos; ++i) {
        if (turma.alunos[i].codigo == codigo) {
            printf("Aluno encontrado:\n");
            printf("Codigo: %d\n", turma.alunos[i].codigo);
            printf("Nome: %s\n", turma.alunos[i].nome);
            printf("Idade: %d\n", turma.alunos[i].idade);
            printf("Coeficiente: %.2f\n", turma.alunos[i].coeficiente);
            return;
        }
    }
    printf("Aluno com codigo %d nao encontrado.\n", codigo);
}

void imprimirAlunos(Turma turma) {
    printf("Codigo\tNome\n");
    for (int i = 0; i < turma.quantidade_alunos; ++i) {
        printf("%d\t%s\n", turma.alunos[i].codigo, turma.alunos[i].nome);
    }
}