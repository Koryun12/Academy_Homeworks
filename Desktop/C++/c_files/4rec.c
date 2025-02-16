#include <stdio.h>




// Ռեկուրսիվ ֆունկցիան, որը հաշվում է զանգվածի գումարը
int arraySum(int arr[], int size) {
    if (size == 0) {
        return 0; 
    }
    return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
    int arr[] = {1,2,12,45,5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int sum = arraySum(arr, size); 

    printf("Array Elements additional՝ %d\n", sum);
    return 0;
}

	


