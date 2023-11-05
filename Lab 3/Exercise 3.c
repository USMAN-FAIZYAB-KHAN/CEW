#include <stdio.h>
int main() {
    // declaring an array of 10 integers
    int arr[10];
    // creating a pointer to the first element of the array
    int *p = arr;
    // taking input from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("-> ");
        // storing the input in the array using the pointer
        scanf("%d", p);
        // incrementing the pointer
        p++;
    }
    // setting the pointer to the first element of the array
    p = arr;
    printf("The array is: ");
    for (int i = 0; i < 10; i++) {
        // printing the array using the pointer
        printf("%d ", *p);
        // incrementing the pointer
        p++;
    }
    printf("\n");
    return 0;
}