#include "arquivo.h"

int K_esimoDigitoRecursivo(int n, int k, int posicaoAtual) {

    if (posicaoAtual == k) {
        return n % 10;  // Retorna o dígito na posição k
    }

    // Chamada recursiva para o próximo dígito
    return K_esimoDigitoRecursivo(n / 10, k, posicaoAtual + 1);
}

int K_esimoDigito(int n, int k) {
    // Inicia a chamada recursiva a partir da posição 1 (da direita para a esquerda)
    return K_esimoDigitoRecursivo(n, k, 1);
}