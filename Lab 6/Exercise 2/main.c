#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {
    int **matrix1 = create_matrix(3, 3, 1);
    int **matrix2 = create_matrix(3, 3, 2);
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            matrix1[i][j] = i+j;
        }
    }
    print_matrix(matrix1, 3, 3);
    transpose_matrix(matrix1, 3, 3);
    print_matrix(matrix1, 3, 3);

    int ** result = add_matrices(matrix1, matrix2, 3, 3);
    print_matrix(result, 3, 3);

    free_matrix(matrix1, 3);
    free_matrix(matrix2, 3);

}

