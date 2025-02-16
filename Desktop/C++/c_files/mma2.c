#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

int* create_matrix() {
    int *matrix = mmap(NULL, ROWS * COLS * sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    if (matrix == MAP_FAILED) {
        perror("mmap");
        return NULL;
    }

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i * COLS + j]);
        }
    }
    return matrix;
}

void print_matrix(int* matrix) {
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i * COLS + j]);
        }
        printf("\n");
    }
}

void transpose_matrix(int* matrix) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = i + 1; j < COLS; j++) {
            int temp = matrix[i * COLS + j];
            matrix[i * COLS + j] = matrix[j * COLS + i];
            matrix[j * COLS + i] = temp;
        }
    }
}

void destroy_matrix(int* matrix) {
    if (munmap(matrix, ROWS * COLS * sizeof(int)) == -1) {
        perror("munmap");
    }
}

int main() {
    int *matrix = create_matrix();
    if (matrix == NULL) return 1;

    print_matrix(matrix);

    transpose_matrix(matrix);
    printf("Transposed matrix:\n");
    print_matrix(matrix);

    destroy_matrix(matrix);
    return 0;
}

