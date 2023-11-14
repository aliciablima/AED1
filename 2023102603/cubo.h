#ifndef CUBO_H
#define CUBO_H

typedef struct {
    double lado;
} Cubo;

void inicializarCubo(Cubo *cubo, double lado);
double obterLado(Cubo *cubo);
double calcularArea(Cubo *cubo);
double calcularVolume(Cubo *cubo);

#endif