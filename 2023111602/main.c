#include <stdio.h>
#include "arquivo.h"

int main() {
    Vetor vetor1 = {1.0, 2.0, 3.0};
    Vetor vetor2 = {4.0, 5.0, 6.0};
    Vetor resultado_soma;

    soma(&vetor1, &vetor2, &resultado_soma);

    printf("Soma dos vetores: (%.2f, %.2f, %.2f)\n",
           resultado_soma.x, resultado_soma.y, resultado_soma.z);

    float resultado_produto_escalar = produto_escalar(&vetor1, &vetor2);

    printf("Produto escalar: %.2f\n", resultado_produto_escalar);

    return 0;
}