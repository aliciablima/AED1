#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"
#include "data.h"

int main() {
    // Criando um ponteiro para o TDA Pessoa
    Pessoa *pessoa = (Pessoa *)malloc(sizeof(Pessoa));
    // Criando um ponteiro para o TDA Data
    Data *data = (Data *)malloc(sizeof(Data));

    // Utilizando as funções criadas
    preencherDados(pessoa);
    preencherData(data);
    imprimirDados(pessoa);
    printf("Data: ");
    imprimirData(data);
    printf("\n");

    // Liberando a memória alocada para os TDAs
    free(pessoa);
    free(data);
    return 0;
}