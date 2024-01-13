#include <stdio.h>
#include "paciente.h"
#include "hash_table.h"

int main() {
    HashTable tabela;
    inicializar_tabela(&tabela);

    inserir_paciente(&tabela, criar_paciente(1, "Paciente1", "123.456.789-01", 25));
    inserir_paciente(&tabela, criar_paciente(2, "Paciente2", "987.654.321-09", 30));

    printf("Tabela antes da remocao:\n");
    imprimir_tabela(&tabela);

    remover_paciente(&tabela, 1);

    printf("\nTabela apos a remocao:\n");
    imprimir_tabela(&tabela);

    liberar_tabela(&tabela);

    return 0;
}