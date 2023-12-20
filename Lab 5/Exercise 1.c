// Write a program to create a new text file and write some text into it. Open the file in
// append mode and add more text to it. Read the contents of the file and display them on
// the console.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // create a file
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(file, "Hello World!\n");
    fclose(file);

    // append to a file
    file = fopen("file.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(file, "Hello World 2!\n");
    fclose(file);

    // read from a file
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s\n", buffer);
    }

}

