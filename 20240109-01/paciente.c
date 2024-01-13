#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"

Paciente* criar_paciente(int codigo, const char* nome, const char* cpf, int idade) {
    Paciente* paciente = (Paciente*)malloc(sizeof(Paciente));
    if (paciente != NULL) {
        paciente->codigo = codigo;
        strncpy(paciente->nome, nome, sizeof(paciente->nome) - 1);
        strncpy(paciente->cpf, cpf, sizeof(paciente->cpf) - 1);
        paciente->idade = idade;
    }
    return paciente;
}

void liberar_paciente(Paciente* paciente) {
    free(paciente);
}

void imprimir_paciente(const Paciente* paciente) {
    printf("Codigo: %d, Nome: %s, CPF: %s, Idade: %d\n", paciente->codigo, paciente->nome, paciente->cpf, paciente->idade);
}