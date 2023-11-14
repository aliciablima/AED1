#include <stdio.h>
#include "cubo.h"

int main() {
    Cubo meuCubo;
    double lado = 3.0;

    inicializarCubo(&meuCubo, lado);

    printf("Lado do cubo: %.2f\n", obterLado(&meuCubo));
    printf("Area do cubo: %.2f\n", calcularArea(&meuCubo));
    printf("Volume do cubo: %.2f\n", calcularVolume(&meuCubo));

    return 0;
}