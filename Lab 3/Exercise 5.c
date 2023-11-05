/*Write a C program to add two matrices using pointers.*/
#include <stdio.h>
int main() {
    // declaring and initializing the matrices
    int matrix1[3][3] = {{1, 2, 5}, {8, 3, 4}, {9, 5, 4}};
    int matrix2[3][3] = {{9, 8, 5}, {2, 7, 6}, {1, 5, 6}};
    int matrix3[3][3];
    // creating pointers to the first elements of the matrices
    int *p1 = matrix1;
    int *p2 = matrix2;
    int *p3 = matrix3;
    // adding the matrices using pointers
    for (int i = 0; i < 9; i++) {
        *p3 = *p1 + *p2;
        p1++;
        p2++;
        p3++;
    }
    p3 = matrix3;
    // printing the resultant matrix
    printf("The sum of the matrices is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *p3);
            p3++;
        }
        printf("\n");
    }
    printf("\n");
}