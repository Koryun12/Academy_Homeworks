#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter The Rows Size: ");
    scanf("%d", &rows);
    printf("Enter The Cols Size: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; 
    int rowSum[rows];       

    
    printf("Enter The Matrix Elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Matrix[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; 
      for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Matrix Rows Elements Sum:\n");
    for (int i = 0; i < rows; i++) {
        printf("Rows %d-ի Sum: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

