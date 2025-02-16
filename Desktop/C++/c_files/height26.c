#include <stdio.h>
#define N 5 // Մատրիցի չափը (հարմարեցրեք ըստ անհրաժեշտության)

// Ֆունկցիա՝ հաշվելու հարևան M-երի քանակը
int countNeighbors(char matrix[N][N], int row, int col) {
    int count = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int newRow = row + i;
            int newCol = col + j;

            // Ստուգում ենք, որ նոր դիրքը մատրիցի սահմաններում է և M է:
            if (newRow >= 0 && newRow < N && newCol >= 0 && newCol < N && (i != 0 || j != 0)) {
                if (matrix[newRow][newCol] == 'M') {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    char matrix[N][N] = {
        {'0', 'M', '0', 'M', '0'},
        {'0', '0', 'M', '0', '0'},
        {'0', '0', '0', '0', '0'},
        {'M', 'M', '0', '0', '0'},
        {'0', '0', '0', 'M', '0'}
    };

    char result[N][N];

    // Նոր մատրիցի կառուցում
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == 'M') {
                result[i][j] = 'M'; // M-երը պահում ենք նույն տեղում
            } else {
                // Հաշվում ենք հարևան M-երի քանակը
                result[i][j] = countNeighbors(matrix, i, j) + '0';
            }
        }
    }

    // Արդյունքի տպում
    printf("Սկզբնական մատրիցը:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nՆոր մատրիցը:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

