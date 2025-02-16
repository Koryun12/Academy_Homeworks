#include <stdio.h>
#include <stdlib.h>

int binar(int num) {
    int count = 0;
    if(num == 0) {
        return 0;
    }
    if(num == 1) {
        return 1;
    }
    while(num != 0) {
        if(num % 2 == 1) {
            count++;
        }
        num = num / 2;
    }
    return count;
}

int *createArray(int num) {
    int *arr = (int *)malloc((num + 1) * sizeof(int));
    for(int i = 0; i <= num + 1; i++) {
        arr[i] = binar(i);
    }
    return arr;
}

int main() {
    int num = 0;
    scanf("%d", &num);

    int *arr = createArray(num);
    for(int i = 0; i <= num + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}