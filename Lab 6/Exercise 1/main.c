/*Develop a header file for a linked list. Define the necessary functions for this data
structure, and implement them in a source file. Then, write a program to demonstrate the
data structure's usage.*/

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    Node *head = NULL;
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);
    head = insertAtEnd(head, 60);
    head = deleteNode(head, 30);
    head = deleteNode(head, 60);
    printList(head);
    return 0;
}