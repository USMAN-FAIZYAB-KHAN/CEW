/*Write a program in C to convert a decimal number to a binary number using functions.*/
#include <stdio.h>
// declaring the function
int decimalToBinary(int num);
int main() {
    // getting the input
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    // calling the function
    printf("The binary equivalent of %d is %d", num, decimalToBinary(num));
    return 0;
}
// function to convert a decimal number to a binary number
int decimalToBinary(int num)
{
    int binary = 0;
    int rem;
    int i = 1;
    // it calculates the binary number by dividing the decimal number by 2
    // and adding the remainder to the binary number
    while (num != 0)
    {
        rem = num % 2;
        num /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}