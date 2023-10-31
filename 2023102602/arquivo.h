#ifndef TUDO_H
#define TUDO_H

typedef struct Cubo {
    double lado;
} Cubo;

typedef struct Complexo {
    double real;
    double imaginario;
} Complexo;

Cubo* criarCubo(double lado);
void destruirCubo(Cubo* cubo);
double getLado(Cubo* cubo);
double calcularArea(Cubo* cubo);
double calcularVolume(Cubo* cubo);

Complexo* criarComplexo(double real, double imaginario);
void destruirComplexo(Complexo* complexo);
Complexo* somarComplexo(Complexo* c1, Complexo* c2);
Complexo* subtrairComplexo(Complexo* c1, Complexo* c2);
Complexo* multiplicarComplexo(Complexo* c1, Complexo* c2);
Complexo* dividirComplexo(Complexo* c1, Complexo* c2);

#endif