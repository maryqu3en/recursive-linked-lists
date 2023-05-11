#include <stdio.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    node * next;
}node;

void deleteEven (node * head) {
    if (head == NULL)
        return;
    else{
        if (head->data % 2 == 0) {
            head=deleteBegin(head);
            deleteEven(head);
        }else{
            deleteEven(head->next);
        }
    }
}