#include <stdio.h>
#include <stdlib.h>

void removeDuplicates(int **arr, int *size) {
    if (*size <= 1) return; 

    int *original = *arr; 
    int *temp = malloc(*size * sizeof(int)); 
    if (temp == NULL) {
       
    }

    int newSize = 1; 
    temp[0] = original[0]; 

    
    for (int i = 1; i < *size; i++) {
        if (original[i] != original[i - 1]) {
            temp[newSize] = original[i];
            newSize++;
        }
    }

    
    temp = realloc(temp, newSize * sizeof(int));
    if (temp == NULL) {
    }

    free(original); 
    *arr = temp;    
    *size = newSize; 
}

int main() {
    int *arr = malloc(10 * sizeof(int));
    if (arr == NULL) {
    }

    int size = 10;
    arr[0] = 1; arr[1] = 1; arr[2] = 2; arr[3] = 2; arr[4] = 3;
    arr[5] = 4; arr[6] = 4; arr[7] = 5; arr[8] = 5; arr[9] = 5;

    printf("Normal Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(&arr, &size);

    printf("Changeing Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); 
    return 0;
}

