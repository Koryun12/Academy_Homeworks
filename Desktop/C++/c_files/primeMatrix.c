#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int* primeNumbersOfMatrix(int** matrix, int n, int m, int* primeCount) {
    int* primes = (int*)malloc(n * m * sizeof(int)); 
    if (!primes) {
    
    }

    *primeCount = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(matrix[i][j])) {
                primes[*primeCount] = matrix[i][j];
                (*primeCount)++;
            }
        }
    }

    primes = (int*)realloc(primes, (*primeCount) * sizeof(int));
    if (!primes && *primeCount > 0) {
    }

    return primes;
}

int main() {
    int n, m;
    printf("Enter the dimensions of the matrix (n m): ");
    scanf("%d %d", &n, &m);

    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(m * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primeCount;
    int* primes = primeNumbersOfMatrix(matrix, n, m, &primeCount);

    printf("Prime numbers in the matrix:\n");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(primes);

    return 0;
}

