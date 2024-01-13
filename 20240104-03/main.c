#include <stdio.h>
#include "arquivo.h"

int main() {
    Deque *D = criarDeque();

    
    Soldado s1 = {1, "Soldado A", "Grau A"};
    Soldado s2 = {2, "Soldado B", "Grau B"};
    Soldado s3 = {3, "Soldado C", "Grau C"};
    Soldado s4 = {4, "Soldado D", "Grau D"};
    Soldado s5 = {5, "Soldado E", "Grau E"};

    inserirFim(D, s1);
    inserirFim(D, s2);
    inserirFim(D, s3);
    inserirFim(D, s4);
    inserirFim(D, s5);

    // Defina o número n e o soldado inicial conforme necessário
    int n = 3;
    int soldadoInicial = 1;

    Soldado soldadoEscapado = eliminarJosephus(D, n, soldadoInicial);

    printf("Soldados eliminados:\n");
    while (!vazia(D)) {
        Soldado eliminado = removerInicio(D);
        printf("%s\n", eliminado.nome);
    }

    printf("\nSoldado que escapou:\n");
    printf("%s\n", soldadoEscapado.nome);

    liberarDeque(D);

    return 0;
}