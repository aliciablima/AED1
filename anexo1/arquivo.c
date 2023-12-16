#include "arquivo.h"
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        perror("Erro ao alocar memória para o nó");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertNodeAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

// Imprime a lista
void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void sortList(Node** listL, Node** listK) {
    while (*listL != NULL) {
        Node* maxNode = *listL;
        Node* current = *listL;

        while (current->next != NULL) {
            if (current->next->data > maxNode->data) {
                maxNode = current->next;
            }
            current = current->next;
        }

        if (maxNode->prev != NULL) {
            maxNode->prev->next = maxNode->next;
        } else {
            *listL = maxNode->next;
        }

        if (maxNode->next != NULL) {
            maxNode->next->prev = maxNode->prev;
        }

        insertNodeAtBeginning(listK, maxNode->data);
    }
}
