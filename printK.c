#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedListFunction.h"

typedef struct Node {
    int data;
    struct Node *next;
}node;

//failed 

void printKthFromEnd(node *head, int k) {
    static int b = k;
    if (head == NULL)
        return;
    else{
        printKthFromEnd(head->next, k);
        b--;
        if (b == 0)
            printf("%d\n", head->data);
        
    }
}

int main() {
    node *head = createLList(3);
    printKthFromEnd(head, 1);
}