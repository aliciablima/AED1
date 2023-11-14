// arquivo.h

#ifndef ARQUIVO_H
#define ARQUIVO_H

typedef struct {
    int codigo;
    char nome[50];
    int idade;
    float coeficiente;
} Aluno;

typedef struct {
    Aluno *alunos;
    int quantidade_alunos;
    int capacidade; // Novo campo para armazenar a capacidade da turma
} Turma;

Turma criarTurma(int capacidade);
void inserirAluno(Turma *turma, Aluno aluno);
void liberarTurma(Turma *turma);
void buscarAlunoPorCodigo(Turma turma, int codigo);
void imprimirAlunos(Turma turma);

#endif