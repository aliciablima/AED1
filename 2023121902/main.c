#include "aviao.h"
#include <stdio.h>

int main() {
    Pilha hangar;
    inicializarPilha(&hangar);

    while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("1. Listar o numero de avioes aguardando no hangar\n");
        printf("2. Tirar um aviao do hangar\n");
        printf("3. Adicionar um aviao no hangar\n");
        printf("4. Listar todos os avioes no hangar\n");
        printf("5. Listar as características do primeiro aviao do hangar\n");
        printf("6. Tirar um aviao do hangar pela posicao\n");
        printf("0. Sair\n");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Número de avioes no hangar: %d\n", pilhaVazia(&hangar) ? 0 : 1);
                break;

            case 2:
                if (!pilhaVazia(&hangar)) {
                    Aviao aviao = desempilhar(&hangar);
                    printf("Aviao %d removido do hangar.\n", aviao.id);
                } else {
                    printf("Hangar vazio. Nenhum aviao para remover.\n");
                }
                break;

            case 3:
                {
                    Aviao novoAviao;
                    printf("Digite o ID do aviao: ");
                    scanf("%d", &novoAviao.id);
                    printf("Digite o nome do aviao: ");
                    scanf("%s", novoAviao.nome);
                    empilhar(&hangar, novoAviao);
                    printf("Aviao adicionado ao hangar.\n");
                }
                break;

            case 4:
                {
                    Node* current = hangar.top;
                    while (current != NULL) {
                        printf("ID: %d, Nome: %s\n", current->aviao.id, current->aviao.nome);
                        current = current->next;
                    }
                }
                break;

            case 5:
                if (!pilhaVazia(&hangar)) {
                    Aviao primeiroAviao = topoDaPilha(&hangar);
                    printf("ID: %d, Nome: %s\n", primeiroAviao.id, primeiroAviao.nome);
                } else {
                    printf("Hangar vazio. Nenhum aviao para mostrar.\n");
                }
                break;

            case 6:
    {
        int posicao;
        printf("Digite a posição do aviao a ser removido: ");
        scanf("%d", &posicao);

        if (posicao <= 0 || posicao > pilhaVazia(&hangar)) {
            printf("Posicao invalida.\n");
        } else {
            Pilha auxiliar;
            inicializarPilha(&auxiliar);

            for (int i = 1; i < posicao; i++) {
                Aviao aviao = desempilhar(&hangar);
                empilhar(&auxiliar, aviao);
            }

            Aviao aviaoRemovido = desempilhar(&hangar);

            while (!pilhaVazia(&auxiliar)) {
                Aviao aviao = desempilhar(&auxiliar);
                empilhar(&hangar, aviao);
            }

            printf("Aviao %d removido do hangar.\n", aviaoRemovido.id);
        }
    }
    break;


            case 0:
                return 0;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}