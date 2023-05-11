#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedListFunction.h"

typedef struct Node {
    int data;
    struct Node *next;
}node;

void printNth(node *head, int n) {
    if (n == 1){
        printf("%d", head->data);
    }
    else 
        printNth(head->next, n-1);
}

void printKthEnd(node *head, int k) {
    printNth(head, LListLength(head) - k);
}

int main() {
    node *head = createLList(5);
    printNth(head, 3);
}