// arquivo.h
#ifndef ARQUIVO_H
#define ARQUIVO_H

typedef struct Paciente {
    int codigo;
    char nome[50];
    char cpf[15];
    int idade;
    struct Paciente *prox;
} Paciente;

typedef struct TabelaHash {
    int tamanho;
    Paciente **lista;
} TabelaHash;

TabelaHash* criarTabela(int tamanho);
void inserirPaciente(TabelaHash *tabela, int codigo, const char *nome, const char *cpf, int idade);
void mostrarPacientes(TabelaHash *tabela);
Paciente* buscarPaciente(TabelaHash *tabela, int codigo);
void liberarTabela(TabelaHash *tabela);

#endif