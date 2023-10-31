#include "arquivo.h"
#include <stdlib.h>

Cubo* criarCubo(double lado) {
    Cubo* cubo = (Cubo*)malloc(sizeof(Cubo));
    cubo->lado = lado;
    return cubo;
}

void destruirCubo(Cubo* cubo) {
    free(cubo);
}

double getLado(Cubo* cubo) {
    return cubo->lado;
}

double calcularArea(Cubo* cubo) {
    return 6 * cubo->lado * cubo->lado;
}

double calcularVolume(Cubo* cubo) {
    return cubo->lado * cubo->lado * cubo->lado;
}

Complexo* criarComplexo(double real, double imaginario) {
    Complexo* complexo = (Complexo*)malloc(sizeof(Complexo));
    complexo->real = real;
    complexo->imaginario = imaginario;
    return complexo;
}

void destruirComplexo(Complexo* complexo) {
    free(complexo);
}

Complexo* somarComplexo(Complexo* c1, Complexo* c2) {
    Complexo* resultado = criarComplexo(c1->real + c2->real, c1->imaginario + c2->imaginario);
    return resultado;
}

Complexo* subtrairComplexo(Complexo* c1, Complexo* c2) {
    Complexo* resultado = criarComplexo(c1->real - c2->real, c1->imaginario - c2->imaginario);
    return resultado;
}

Complexo* multiplicarComplexo(Complexo* c1, Complexo* c2) {
    Complexo* resultado = criarComplexo(
        (c1->real * c2->real) - (c1->imaginario * c2->imaginario),
        (c1->real * c2->imaginario) + (c1->imaginario * c2->real)
    );
    return resultado;
}

Complexo* dividirComplexo(Complexo* c1, Complexo* c2) {
    double divisor = (c2->real * c2->real) + (c2->imaginario * c2->imaginario);
    Complexo* resultado = criarComplexo(
        ((c1->real * c2->real) + (c1->imaginario * c2->imaginario)) / divisor,
        ((c1->imaginario * c2->real) - (c1->real * c2->imaginario)) / divisor
    );
    return resultado;
}