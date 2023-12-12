#include <stdio.h>
#include <stdlib.h>
#include "matrix_operations.h"

int **create_matrix(int rows, int columns, int value) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(columns * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) { 
            matrix[i][j] = value;
        }
    }
    return matrix;
}

int **add_matrices(int **matrix1, int **matrix2, int rows, int columns) {
    int **result = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        result[i] = (int *)malloc(columns * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) { 
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

int **transpose_matrix(int **matrix, int rows, int columns) {
    int **result = (int **)malloc(columns * sizeof(int *));
    for (int i = 0; i < columns; i++) {
        result[i] = (int *)malloc(rows * sizeof(int));
    }
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) { 
            result[i][j] = matrix[j][i];
        }
    }
    return result;
}

void print_matrix(int **matrix, int rows, int columns) {
    printf("\n");
    for (int i = 0; i < rows; i++) {
        printf("| ");
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

void free_matrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

