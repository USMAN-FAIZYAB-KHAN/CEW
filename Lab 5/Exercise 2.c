// Create a program that reads a text file and counts the number of words in it. Display the
// total number of words at the end.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // read from a file
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    char buffer[2];
    int count = 0;
    // read the file character by character
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // if the character is a space or a newline, increment the count
        if (buffer[0] == ' ' || buffer[0] == '\n') {
            count++;
        }
    }
    if (buffer[0] != ' ' && buffer[0] != '\n') {
        count++;
    }
    printf("Total number of words: %d\n", count);
}