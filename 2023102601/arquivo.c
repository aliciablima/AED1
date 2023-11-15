#include <stdio.h>
#include "arquivo.h"

// Função preencher os dados da estrutura Pessoa
void preencherDados(Pessoa *pessoa) {
    printf("Digite o nome completo: ");
    fgets(pessoa->nomeCompleto, sizeof(pessoa->nomeCompleto), stdin);

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%s", pessoa->dataNascimento);

    printf("Digite o CPF (xxx.xxx.xxx-xx): ");
    scanf("%s", pessoa->cpf);
}

// Funçãoimprimir os dados da estrutura Pessoa
void imprimirDados(const Pessoa *pessoa) {
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s", pessoa->nomeCompleto);
    printf("Data de Nascimento: %s\n", pessoa->dataNascimento);
    printf("CPF: %s\n", pessoa->cpf);
}