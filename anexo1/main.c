#include "arquivo.h"

int main() {
    
    Node* listL = NULL;
    insertNodeAtBeginning(&listL, 5);
    insertNodeAtBeginning(&listL, 2);
    insertNodeAtBeginning(&listL, 8);
    insertNodeAtBeginning(&listL, 1);

    printf("Lista L (nao ordenada): ");
    printList(listL);

    Node* listK = NULL;

    sortList(&listL, &listK);

    printf("Lista L (vazia): ");
    printList(listL);

    printf("Lista K (ordenada): ");
    printList(listK);

    return 0;
}