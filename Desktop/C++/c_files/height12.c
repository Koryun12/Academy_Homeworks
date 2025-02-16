#include <stdio.h>

int square(int num);

int main() {
    int num, result;

    printf("Enter The Number: ");
    scanf("%d", &num);

    result = square(num);

    printf("The Number Square is: %d\n", result);

    return 0;
}


int square(int num) {
    return num * num;
}

