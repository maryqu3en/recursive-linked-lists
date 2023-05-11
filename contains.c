#include <stdio.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    node * next;
}node;

bool contains (node * head, int val) {
    if (head == NULL)
        retrun false;
    else if (head->next == NULL)
        return head->data == val;
    else 
        return head->data == val || contains (head->next, val);
}

