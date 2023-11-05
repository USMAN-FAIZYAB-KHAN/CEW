/*Write a C program to search for an element in an array using pointers.*/
#include <stdio.h>
int search(int arr[], int len, int num);
int main() {
    // declaring an array
    int arr[] = {1, 2, 3, 4, 5};
    // calculating the length of the array
    int len = sizeof(arr)/sizeof(arr[0]);
    // calling the search function
    int num = 3;
    int index = search(arr, len, num);
    if (index == -1) {
        printf("%d is not present in the array.\n", num);
    } else {
        printf("%d is present at index %d.\n", num, index);
    }
    
}
int search(int arr[], int len, int num) {
    // creating a pointer to the first element of the array
    int *p = arr;
    for (int i = 0; i < len; i++) {
        // if the pointer is pointing to the target, return the index
        if (*p == num) {
            return i;
        }
        // incrementing the pointer
        p++;
    }
    return -1;
}