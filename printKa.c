#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedListFunction.h"

typedef struct Node {
    int data;
    struct Node *next;
}node;


void printKthFromEnd(node *head, int *k) {
    if (head == NULL)
        return;
    else{
        printKthFromEnd(head->next, &*k);
        (*k)--;
        if (*k == 0)
            printf("%i", head->data);
    }
}

int main() {
    node *head = createLList(3);
    int a = 1;
    printKthFromEnd(head, &a);
}