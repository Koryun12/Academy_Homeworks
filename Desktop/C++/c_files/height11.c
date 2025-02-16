#include <stdio.h>

int add(int a, int b);

int main() {
    int num1, num2, result;

    printf("Enter The First Number: ");
    scanf("%d", &num1);

    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    result = add(num1, num2);

    printf("The Result is: %d\n", result);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

