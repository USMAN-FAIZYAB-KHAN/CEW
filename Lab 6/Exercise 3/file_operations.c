#include "file_operations.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_from_file(char *filename) {
    char buffer[100];

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    while (fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
}

void write_to_file(char *filename, char *text) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    fprintf(fp, "%s", text);
    fclose(fp);
}


int file_exists(char *filename) {
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }
    fclose(fp);
    return 1;
}

