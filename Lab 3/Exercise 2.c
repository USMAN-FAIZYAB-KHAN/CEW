/*Write a program in C to print a string in reverse using pointers.*/
#include <stdio.h>
int main() {
    char string[] = "I am learning C programming language.";
    int len = sizeof(string);
    // index is len-2 because the last character is '\0'
    // setting pointer to the last character of the string
    char *p = &string[len-2];
    // string is a pointer to the first character of the string
    // printing each character until the first character is reached
    while (p >= string) {
        printf("%c", *p);
        // decrementing the pointer
        p-=1;
    }
    printf("\n");
    return 0;
}