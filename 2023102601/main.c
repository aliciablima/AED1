#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"

int main() {
    // Criando um ponteiro para o TDA Pessoa
    Pessoa *pessoa = (Pessoa *)malloc(sizeof(Pessoa));

    // Utilizando as funções criadas
    preencherDados(pessoa);
    imprimirDados(pessoa);

    // Liberando a memória alocada para o TDA Pessoa
    free(pessoa);

    return 0;
}