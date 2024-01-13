// main.c
#include <stddef.h> 
#include "arquivo.h"

int main() {
    TabelaHash *tabela = criarTabela(10);

    inserirPaciente(tabela, 101, "Joao", "123456789", 25);
    inserirPaciente(tabela, 202, "Maria", "987654321", 30);

    mostrarPacientes(tabela);

    Paciente *paciente = buscarPaciente(tabela, 101);
    if (paciente != NULL) {
        printf("Paciente encontrado: Codigo: %d, Nome: %s, CPF: %s, Idade: %d\n", 
            paciente->codigo, paciente->nome, paciente->cpf, paciente->idade);
    } else {
        printf("Paciente n encontrado.\n");
    }

    liberarTabela(tabela);

    return 0;
}