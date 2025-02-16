#include <stdio.h>
#include <stdlib.h>

void leftSum(int** arr, int size) {
    if (!arr || size <= 0) {
        return; 
    }

    
    int* newArr = (int*)malloc(size * sizeof(int));
    if (!newArr) {
        return;
    }

    
    newArr[0] = 0;
    for (int i = 1; i < size; i++) {
        newArr[i] = newArr[i - 1] + (*arr)[i - 1];
    }

    
    free(*arr);

    
    *arr = newArr;
}

int main() {
    int size = 4;
    int* array = (int*)malloc(size * sizeof(int));

   
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;

    printf("Initial Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

   
    leftSum(&array, size);

    printf("Result Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

   
    free(array);

    return 0;
}

