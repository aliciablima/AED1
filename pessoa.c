#include "tipos.h"
#include <stdio.h>

void preencherPessoa(Pessoa* pessoa) {
    printf("Nome:\n");
    scanf("%s", pessoa->nome);
    printf("Data de Nascimento:\n");
    preencherData(&pessoa->nascimento);
    printf("CPF:\n");
    scanf("%s", pessoa->cpf);
}

void imprimirPessoa(Pessoa* pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: ");
    imprimirData(&pessoa->nascimento);
    printf("CPF: %s\n", pessoa->cpf);
}

void preencherData(Data* data) {
    printf("Dia/Mes/Ano:\n");
    scanf("%d/%d/%d", &data->dia, &data->mes, &data->ano);
}

void imprimirData(Data* data) {
    printf("%d/%d/%d\n", data->dia, data->mes, data->ano);
}
