#ifndef TIPOS_H
#define TIPOS_H

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[100];
    Data nascimento;
    char cpf[15];
} Pessoa;

void preencherPessoa(Pessoa* pessoa);
void imprimirPessoa(Pessoa* pessoa);
void preencherData(Data* data);
void imprimirData(Data* data);

#endif