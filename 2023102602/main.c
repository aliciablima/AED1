#include <stdio.h>
#include "arquivo.h"

int main() {
    
    Cubo* meuCubo = criarCubo(5.0);
    printf("Lado do cubo: %lf\n", getLado(meuCubo));
    printf("Area do cubo: %lf\n", calcularArea(meuCubo));
    printf("Volume do cubo: %lf\n", calcularVolume(meuCubo));
    destruirCubo(meuCubo);

    Complexo* num1 = criarComplexo(2.0, 3.0);
    Complexo* num2 = criarComplexo(1.0, -1.0);

    Complexo* soma = somarComplexo(num1, num2);
    printf("Soma: %.2lf + %.2lfi\n", soma->real, soma->imaginario);

    Complexo* subtracao = subtrairComplexo(num1, num2);
    printf("Subtracao: %.2lf + %.2lfi\n", subtracao->real, subtracao->imaginario);

    Complexo* multiplicacao = multiplicarComplexo(num1, num2);
    printf("Multiplicacao: %.2lf + %.2lfi\n", multiplicacao->real, multiplicacao->imaginario);

    Complexo* divisao = dividirComplexo(num1, num2);
    printf("Divisao: %.2lf + %.2lfi\n", divisao->real, divisao->imaginario);

    destruirComplexo(num1);
    destruirComplexo(num2);
    destruirComplexo(soma);
    destruirComplexo(subtracao);
    destruirComplexo(multiplicacao);
    destruirComplexo(divisao);

    return 0;
}