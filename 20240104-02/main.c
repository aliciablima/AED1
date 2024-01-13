#include <stdio.h>
#include "arquivo.h"

int main() {
    Deque *D = criarDeque();

    Soldado soldados[10] = {
        {1, "Soldado 1", "Sargento"},
        {2, "Soldado 2", "Cabo"},
        {3, "Soldado 3", "Tenente"},
        {4, "Soldado 4", "Sargento"},
        {5, "Soldado 5", "Cabo"},
        {6, "Soldado 6", "Tenente"},
        {7, "Soldado 7", "Sargento"},
        {8, "Soldado 8", "Cabo"},
        {9, "Soldado 9", "Tenente"},
        {10, "Soldado 10", "Sargento"}
    };

    for (int i = 0; i < 5; i++) {
        inserirInicio(D, soldados[i]);
    }

    // Inserindo soldados no final do deque
    for (int i = 5; i < 10; i++) {
        inserirFim(D, soldados[i]);
    }

    printf("Contagem: %d\n", contar(D));
    printf("Primeiro: %s\n", primeiro(D).nome);
    printf("ultimo: %s\n", ultimo(D).nome);

    // Removendo soldados do início e do final do deque
    Soldado removidoInicio = removerInicio(D);
    Soldado removidoFim = removerFim(D);

    printf("Soldado removido do inicio: %s\n", removidoInicio.nome);
    printf("Soldado removido do fim: %s\n", removidoFim.nome);

    printf("Contagem após remocao: %d\n", contar(D));

    liberarDeque(D);
    return 0;
}
