#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    
    printf("Enter N (Matrix Size): ");
    scanf("%d", &N);

    int **matrix = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matrix[i] = (int *)malloc(N * sizeof(int));
    }

    printf("Enter Elements of Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int *columnSums = (int *)malloc(N * sizeof(int));
    
    for (int i = 0; i < N; i++) {
        columnSums[i] = 0;
    }

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            columnSums[j] += matrix[i][j];  
        }
    }

    printf("Pows Sum՝ {");
    for (int i = 0; i < N; i++) {
        printf("%d", columnSums[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(columnSums);

    return 0;
}

