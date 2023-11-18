#include <stdio.h>
#include "arquivo.h"

int main() {
    int numero = 2845;
    int k = 3;

    int k_esimo_digito = K_esimoDigito(numero, k);

    printf("O %d-esimo digito de %d eh: %d\n", k, numero, k_esimo_digito);

    return 0;
}