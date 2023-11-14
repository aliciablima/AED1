#include "num.h"

NumeroComplexo criarComplexo(double real, double imag) {
    NumeroComplexo num;
    num.real = real;
    num.imag = imag;
    return num;
}

void destruirComplexo(NumeroComplexo* num) {
}

NumeroComplexo somarComplexos(NumeroComplexo num1, NumeroComplexo num2) {
    NumeroComplexo resultado;
    resultado.real = num1.real + num2.real;
    resultado.imag = num1.imag + num2.imag;
    return resultado;
}

NumeroComplexo subtrairComplexos(NumeroComplexo num1, NumeroComplexo num2) {
    NumeroComplexo resultado;
    resultado.real = num1.real - num2.real;
    resultado.imag = num1.imag - num2.imag;
    return resultado;
}

NumeroComplexo multiplicarComplexos(NumeroComplexo num1, NumeroComplexo num2) {
    NumeroComplexo resultado;
    resultado.real = num1.real * num2.real - num1.imag * num2.imag;
    resultado.imag = num1.real * num2.imag + num1.imag * num2.real;
    return resultado;
}

NumeroComplexo dividirComplexos(NumeroComplexo num1, NumeroComplexo num2) {
    NumeroComplexo resultado;
    double denominador = num2.real * num2.real + num2.imag * num2.imag;

    resultado.real = (num1.real * num2.real + num1.imag * num2.imag) / denominador;
    resultado.imag = (num1.imag * num2.real - num1.real * num2.imag) / denominador;

    return resultado;
}