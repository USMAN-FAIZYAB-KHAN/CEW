// Create a header file called that provides functions for reading and writing files. Define
// functions for reading text from a file, writing text to a file, and checking file existence.
// Implement these functions in a source file and use them in a program.

#include <stdio.h>
#include <stdlib.h>
#include "file_operations.h"

int main() {
    char *filename = "test.txt";
    char *text = "Hello, world!\n";

    if (file_exists(filename)) {
        printf("File exists\n");
        read_from_file(filename);
    } else {
        printf("File does not exist\n");
        write_to_file(filename, text);
    }

    return 0;
}