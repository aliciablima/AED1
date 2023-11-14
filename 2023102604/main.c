#include <stdio.h>
#include "num.h"

int main() {
    NumeroComplexo num1 = criarComplexo(3.0, 4.0);
    NumeroComplexo num2 = criarComplexo(1.0, -2.0);

    NumeroComplexo soma = somarComplexos(num1, num2);
    NumeroComplexo diferenca = subtrairComplexos(num1, num2);
    NumeroComplexo produto = multiplicarComplexos(num1, num2);
    NumeroComplexo quociente = dividirComplexos(num1, num2);

    printf("Soma: %.2f + %.2fi\n", soma.real, soma.imag);
    printf("Diferenca: %.2f + %.2fi\n", diferenca.real, diferenca.imag);
    printf("Produto: %.2f + %.2fi\n", produto.real, produto.imag);
    printf("Quociente: %.2f + %.2fi\n", quociente.real, quociente.imag);

    return 0;
}