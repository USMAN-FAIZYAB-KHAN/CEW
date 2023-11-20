#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Write a C program that removes elements with odd indices from a singly linked list.
struct Node* removeOdd(struct Node *head) {
    // making two pointers one for the current node 
    // and one for the previous node
    struct Node *current = head;
    struct Node *prev = NULL;
    int i = 0;
    // looping through the linked list
    while (current != NULL) {
        // if the index is odd
        if (i % 2 == 1) {
            // set the previous node's next pointer to the current node's next pointer
            prev->next = current->next;
            // free the current node
            free(current);
            // set the current node to the next node
            current = prev->next;
        }
        // if the index is even 
        else 
        {
            prev = current;
            current = current->next;
        }
        i++; // increment the index
    }
    return head;
}