/*Write a C program to read a sentence and replace lowercase characters with uppercase and vice 
versa.*/
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main() {
    // declaring a string of size 100
    char str[100];
    printf("Enter a string: ");
    // taking the string as input
    // using %99[^\n]s to take the input of a string with spaces
    scanf("%99[^\n]s", str);
    int len=strlen(str);
    for (int i=0; i<len; i++) {
        // checking if the character is lowercase or not
        if (islower(str[i])) {
            str[i]=toupper(str[i]);
        }
        else {
            str[i]=tolower(str[i]);
        }
    }
    printf("The updated string is: %s\n", str);
    return 0;
}
