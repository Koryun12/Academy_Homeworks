#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    printf("Enter N (Pows) և M (Colums): ");
    scanf("%d %d", &N, &M);

   
    int **matrix = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (int *)malloc(M * sizeof(int));
    }

    
    printf("Enter The Elements of matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int *maxValues = (int *)malloc(N * sizeof(int));

    
    for (int i = 0; i < N; i++) {
        int maxVal = matrix[i][0];
        for (int j = 1; j < M; j++) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
        maxValues[i] = maxVal; 
    }

    
    printf("Matrix Pows Maximum Value.\n");
    for (int i = 0; i < N; i++) {
        printf("Տող %d: %d\n", i+1, maxValues[i]);
    }

   
    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(maxValues);

    return 0;
}

