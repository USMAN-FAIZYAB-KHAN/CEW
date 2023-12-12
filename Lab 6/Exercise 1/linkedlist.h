#ifndef LinkedList_H
#define LinkedList_H

typedef struct node {
    int data;
    struct node *next;
} Node;

Node * createNode(int data);
Node * insertAtBeginning(Node *head, int data);
Node * insertAtEnd(Node *head, int data);
Node * deleteNode(Node *head, int data);
void printList(Node *head);

#endif

