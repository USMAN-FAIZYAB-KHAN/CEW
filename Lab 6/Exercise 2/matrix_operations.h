#ifndef MatrixOperations_H
#define MatrixOperations_H

int **create_matrix(int rows, int columns, int value);
int **add_matrices(int **matrix1, int **matrix2, int rows, int columns);
int **transpose_matrix(int **matrix, int rows, int columns);
void print_matrix(int **matrix, int rows, int columns);
void free_matrix(int **matrix, int rows);

#endif

