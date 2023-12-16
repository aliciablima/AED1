#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <stddef.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* createNode(int data);
void insertNodeAtBeginning(Node** head, int data);
void printList(Node* head);
void sortList(Node** listL, Node** listK);

#endif