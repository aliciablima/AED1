// arquivo.c
#include "arquivo.h"
#include <stdio.h>
#include <stddef.h> 
#include <stdlib.h>
#include <string.h>

TabelaHash* criarTabela(int tamanho) {
    TabelaHash *tabela = (TabelaHash*)malloc(sizeof(TabelaHash));
    tabela->tamanho = tamanho;
    tabela->lista = (Paciente**)malloc(tamanho * sizeof(Paciente*));

    for (int i = 0; i < tamanho; i++) {
        tabela->lista[i] = NULL;
    }

    return tabela;
}

void inserirPaciente(TabelaHash *tabela, int codigo, const char *nome, const char *cpf, int idade) {
    int indice = codigo % tabela->tamanho;

    Paciente *novoPaciente = (Paciente*)malloc(sizeof(Paciente));
    novoPaciente->codigo = codigo;
    strcpy(novoPaciente->nome, nome);
    strcpy(novoPaciente->cpf, cpf);
    novoPaciente->idade = idade;
    novoPaciente->prox = tabela->lista[indice];
    tabela->lista[indice] = novoPaciente;
}

void mostrarPacientes(TabelaHash *tabela) {
    for (int i = 0; i < tabela->tamanho; i++) {
        Paciente *atual = tabela->lista[i];
        while (atual != NULL) {
            printf("Código: %d, Nome: %s, CPF: %s, Idade: %d\n", atual->codigo, atual->nome, atual->cpf, atual->idade);
            atual = atual->prox;
        }
    }
}

Paciente* buscarPaciente(TabelaHash *tabela, int codigo) {
    int indice = codigo % tabela->tamanho;
    Paciente *atual = tabela->lista[indice];

    while (atual != NULL) {
        if (atual->codigo == codigo) {
            return atual;
        }
        atual = atual->prox;
    }

    return NULL;
}

void liberarTabela(TabelaHash *tabela) {
    for (int i = 0; i < tabela->tamanho; i++) {
        Paciente *atual = tabela->lista[i];
        while (atual != NULL) {
            Paciente *temp = atual;
            atual = atual->prox;
            free(temp);
        }
    }

    free(tabela->lista);
    free(tabela);
}