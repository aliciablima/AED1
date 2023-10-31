#include <stdio.h>
#include "tipos.h"

int main() {
    Pessoa pessoa;
    preencherPessoa(&pessoa);

    printf("Pessoa:\n");
    imprimirPessoa(&pessoa);

    return 0;
}
