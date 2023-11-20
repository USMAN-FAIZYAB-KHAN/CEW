#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *mergeLists(struct Node *h1, struct Node *h2) {
    // creating a head node for the new list
    struct Node *head = NULL;
    // making two pointers to the two lists
    struct Node *a = h1;
    struct Node *b = h2;
    // looping through the two lists until one of them is exhausted
    while (a != NULL && b != NULL) {
        // if the data in the first list is smaller than the data in the second list
        if (a->data < b->data) {
            // insert the data from the first list into the new list
            head = insertAtEnd(head, a->data);
            // move the pointer to the next node
            a = a->next;
        } 
        // if the data in the second list is smaller than the data in the first list
        else if (a->data > b->data) {
            // insert the data from the second list into the new list
            head = insertAtEnd(head, b->data);
            // move the pointer to the next node
            b = b->next;
        }
        // if the data in the first list is equal to the data in the second list
        else 
        {
            // insert the data from the first list into the new list
            head = insertAtEnd(head, a->data);
            // move the pointer to the next node
            a = a->next;
            b = b->next;
        }
    }
    // if the second list is exhausted
    while (a != NULL) {
        // insert the data from the first list into the new list
        head = insertAtEnd(head, a->data);
        a = a->next;
    }
    // if the first list is exhausted
    while (b != NULL) {
        // insert the data from the second list into the new list
        head = insertAtEnd(head, b->data);
        b = b->next;
    }

    return head; 
}