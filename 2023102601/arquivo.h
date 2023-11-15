#ifndef ARQUIVO_H
#define ARQUIVO_H


typedef struct {
    char nomeCompleto[100];
    char dataNascimento[11];  //dd/mm/aaaa
    char cpf[12];  //xxx.xxx.xxx-xx
} Pessoa;

// Funções para manipulação do TDA Pessoa
void preencherDados(Pessoa *pessoa);
void imprimirDados(const Pessoa *pessoa);

#endif