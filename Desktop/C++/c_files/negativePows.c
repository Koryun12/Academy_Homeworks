#include <stdio.h>
#include <stdlib.h>

void removeNegativeRows(int ***matrix, int *rows, int cols) {
    if (!matrix || !*matrix || !rows || *rows <= 0 || cols <= 0) {
        return; 
    }

    
    int validRows = 0;
    for (int i = 0; i < *rows; i++) {
        int hasNegative = 0;
        for (int j = 0; j < cols; j++) {
            if ((*matrix)[i][j] < 0) {
                hasNegative = 1;
                break;
            }
        }
        if (!hasNegative) {
            validRows++;
        }
    }

   
    int **newMatrix = (int **)malloc(validRows * sizeof(int *));
    if (!newMatrix) {
        perror("Memory allocation failed");
        return;
    }
  
    int newRowIdx = 0;
    for (int i = 0; i < *rows; i++) {
        int hasNegative = 0;
        for (int j = 0; j < cols; j++) {
            if ((*matrix)[i][j] < 0) {
                hasNegative = 1;
                break;
            }
        }
        if (!hasNegative) {
            newMatrix[newRowIdx] = (*matrix)[i];
            newRowIdx++;
        } else {
            free((*matrix)[i]); 
        }
    }

    
    free(*matrix);
    *matrix = newMatrix;
    *rows = validRows; 
}

int main() {
    int rows = 4, cols = 3;
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    int values[4][3] = {
        {1, 2, 3},
        {-1, 4, 5},
        {6, 7, 8},
        {9, -10, 11}};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = values[i][j];
        }
    }

    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    removeNegativeRows(&matrix, &rows, cols);

    printf("Modified Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

