// main.c
#include "arquivo.h"
#include <stdio.h>

int main() {
    Turma turma = criarTurma(10);

    // Inserir alguns alunos para teste
    Aluno aluno1 = {1, "Joao Sampaio", 20, 7.5};
    Aluno aluno2 = {2, "Maria Santos", 22, 8.0};

    inserirAluno(&turma, aluno1);
    inserirAluno(&turma, aluno2);

    imprimirAlunos(turma);

    // Buscar aluno por código
    buscarAlunoPorCodigo(turma, 1);

    // Liberar espaço na memória
    liberarTurma(&turma);

    return 0;
}