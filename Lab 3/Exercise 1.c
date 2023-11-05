/*Write a program in C to swap elements using call by reference.*/
#include <stdio.h>
void swap(int *a, int *b);
int main() {
    int a, b;
    a = 5;
    b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    // passing addresses of a and b
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *a, int *b) {
    // creating a temporary variable
    int temp;
    // swapping values by using temp
    temp = *a;
    *a = *b;
    *b = temp;
}