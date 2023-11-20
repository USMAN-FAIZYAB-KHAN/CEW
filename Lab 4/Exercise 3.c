#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int * convertToArray(struct Node *head) {
    // allocate memory for the array
    int *arr = (int *)malloc(sizeof(int));
    if (arr == NULL) {
        exit(1);
    }
    // copy the first element explicitly
    arr[0] = head->data;
    int i = 1;
    // setting the current node to the next node
    struct Node *current = head->next;
    // loop through the linked list
    while (current != NULL)
    {
        i += 1;
        // reallocate memory for the array
        int *tmp = (int *)realloc(arr, i * sizeof(int));
        if (tmp == NULL) {
            free(arr);
            exit(1);
        }
        // set the array to the new memory address
        arr = tmp;
        // copy the data to the array
        arr[i-1] = current->data;
        current = current->next;
    }
    return arr;
}