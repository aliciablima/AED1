#include <stdio.h>
#include "arquivo.h"

int main() {
    Deque *D = criarDeque();

    Soldado s1 = {1, "Soldado 1", "Sargento"};
    Soldado s2 = {2, "Soldado 2", "Cabo"};
    Soldado s3 = {3, "Soldado 3", "Tenente"};

    inserirInicio(D, s1);
    inserirFim(D, s2);
    inserirFim(D, s3);

    printf("Contagem: %d\n", contar(D));
    printf("Primeiro: %s\n", primeiro(D).nome);
    printf("ultimo: %s\n", ultimo(D).nome);

    Soldado removidoInicio = removerInicio(D);
    printf("Soldado removido do inicio: %s\n", removidoInicio.nome);

    Soldado removidoFim = removerFim(D);
    printf("Soldado removido do fim: %s\n", removidoFim.nome);

    printf("Contagem apos remoção: %d\n", contar(D));

    liberarDeque(D);

    return 0;
}