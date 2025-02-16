#include <stdio.h>
#include <stdlib.h>

int diagonalSum(int n, int **matrix) {
    int mainDiagonalSum = 0;      
    int secondaryDiagonalSum = 0; 

    for (int i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];           
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    return mainDiagonalSum + secondaryDiagonalSum;
}

int main() {
    int n;

    printf("Enter The Matrix Size (n x n): ");
    scanf("%d", &n);

    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter Elemenents of Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
  
    int result = diagonalSum(n, matrix);
    printf("The Sum is: %d\n", result);

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

