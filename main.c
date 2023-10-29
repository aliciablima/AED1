#include <stdio.h>
#include ".h"

int main() {
    Pessoa pessoa;
    preencherPessoa(&pessoa);

    printf("Pessoa:\n");
    imprimirPessoa(&pessoa);

    return 0;
}
