/* Write a C program to print all unique elements in an array.*/
#include <stdio.h>
// this function prints all unique elements in an array
void printUnique(int arr[], int arrlen);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 1, 2, 4, 5, 6, 7};
    // calculate the length of the array
    int arrlen = sizeof(arr) / sizeof(arr[0]);
    // call the function
    printUnique(arr, arrlen);
    return 0;
}

void printUnique(int arr[], int arrlen) {
    for (int i = 0; i < arrlen; i++) {
        // check if the current element is unique
        int j;
        for (j = 0; j <= i; j++) {
            // if the current element is not unique, break
            if (arr[i] == arr[j]) {
                break;
            }
        }
        // if the current element is unique, print it
        if (j == i) {
                printf("%d ", arr[i]);
        }
    }
}
