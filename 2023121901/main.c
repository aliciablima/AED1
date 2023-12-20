#include "fila.h"
#include <stdio.h>

int main() {
    Fila filaDecolagem;
    inicializarFila(&filaDecolagem);

    while (1) {
        printf("\nEscolha uma opçao:\n");
        printf("1. Listar o numero de avioes aguardando na fila de decolagem.\n");
        printf("2. Autorizar a decolagem do primeiro aviao da fila.\n");
        printf("3. Adicionar um avião na fila de espera.\n");
        printf("4. Listar todos os avioes na fila de espera.\n");
        printf("5. Listar as caracteristicas do primeiro aviao da fila.\n");
        printf("0. Sair.\n");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Numero de avioes aguardando na fila de decolagem: %d\n", tamanhoFila(&filaDecolagem));
                break;
            case 2:
                if (tamanhoFila(&filaDecolagem) > 0) {
                    Aviao aviaoDecolagem = desenfileirar(&filaDecolagem);
                    printf("Decolagem autorizada para o aviao: %s, Identificador: %d\n", aviaoDecolagem.nome, aviaoDecolagem.identificador);
                } else {
                    printf("Nenhum aviao aguardando na fila de decolagem.\n");
                }
                break;
            case 3: {
                Aviao novoAviao;
                printf("Digite o nome do aviao: ");
                scanf("%s", novoAviao.nome);
                printf("Digite o identificador do aviao: ");
                scanf("%d", &novoAviao.identificador);
                enfileirar(&filaDecolagem, novoAviao);
                printf("Avião adicionado na fila de espera.\n");
                break;
            }
            case 4:
                listarFila(&filaDecolagem);
                break;
            case 5: {
                if (tamanhoFila(&filaDecolagem) > 0) {
                    Aviao aviaoFrente = frenteFila(&filaDecolagem);
                    printf("Características do primeiro aviao na fila: Nome: %s, Identificador: %d\n", aviaoFrente.nome, aviaoFrente.identificador);
                } else {
                    printf("Nenhum aviao aguardando na fila de decolagem.\n");
                }
                break;
            }
            case 0:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção invalida. Tente novamente.\n");
        }
    }

    return 0;
}