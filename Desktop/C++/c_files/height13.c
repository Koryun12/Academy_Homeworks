#include <stdio.h>

int is_positive(int num);

int main() {
    int num, result;

    printf("Enter The Number: ");
    scanf("%d", &num);

    result = is_positive(num);

    if (result == 1) {
        printf("Number is Positive:\n");
    } else {
        printf("Number is NotPositive:\n");
    }

    return 0;
}

int is_positive(int num) {
    if (num > 0) {
        return 1; 
    } else {
        return 0; 
    }
}

