/*Write a C program to compare two strings without using string library functions.*/
#include <stdio.h>

int compareStrings(char str1[], char str2[]);

int main() {
    // taking the two strings as input
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    // comparing the two strings by calling the function
    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    }
    else {
        printf("The strings are not equal.\n");
    }
    return 0;
}

int compareStrings(char str1[], char str2[]) {
    int i=0;
    // comparing the two strings character by character
    while (str1[i]!='\0' && str2[i]!='\0') {
        if (str1[i]!=str2[i]) {
            return 0;
        }
        i++;
    }
    // if the two strings are equal, then the loop will break 
    // when both the strings reach the null character
    if (str1[i]=='\0' && str2[i]=='\0') {
        return 1;
    }
    return 0;
}