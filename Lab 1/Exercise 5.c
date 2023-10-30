/*Write a function to calculate the nth Fibonacci number and call it recursively to print
the Fibonacci series.*/

#include <stdio.h>
// Function to calculate the nth Fibonacci number
int calculateFibonacci(int n);
// Function to print the Fibonacci series up to the nth number
void printFibonacciSeries(int n);
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printFibonacciSeries(n);
    return 0;   
}
int calculateFibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        // the function calculates the sum of the previous two numbers recursively
        return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
    }
}
void printFibonacciSeries(int n) {
    // it simply prints the Fibonacci numbers up to the nth number by calling the calculateFibonacci function
    for (int i = 0; i <= n; i++) {
        printf("%d ", calculateFibonacci(i));
    }
    printf("\n");
}
