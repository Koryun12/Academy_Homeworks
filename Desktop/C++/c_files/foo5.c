#include <stdlib.h>
#include <stdbool.h>
int main() {
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int* primeNumbersOfMatrix(int **matrix, int n, int m, int *count) {
    int *primes = malloc(n * m * sizeof(int));
    *count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(matrix[i][j])) {
                primes[(*count)++] = matrix[i][j];
            }
        }
    }
    return primes;
 }
}
