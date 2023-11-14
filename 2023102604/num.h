#ifndef NUM_H
#define NUM_H

typedef struct {
    double real;
    double imag;
} NumeroComplexo;

NumeroComplexo criarComplexo(double real, double imag);
void destruirComplexo(NumeroComplexo* num);
NumeroComplexo somarComplexos(NumeroComplexo num1, NumeroComplexo num2);
NumeroComplexo subtrairComplexos(NumeroComplexo num1, NumeroComplexo num2);
NumeroComplexo multiplicarComplexos(NumeroComplexo num1, NumeroComplexo num2);
NumeroComplexo dividirComplexos(NumeroComplexo num1, NumeroComplexo num2);

#endif 
