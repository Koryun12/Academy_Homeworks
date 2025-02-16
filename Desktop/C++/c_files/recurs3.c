#include <stdio.h>

int rec(int num) {
    if (num == 0) {
        return 1;
    }
    return (num % 10) * rec(num / 10);
}

int main() {
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The Result is: %d\n", rec(num));
    return 0;
}

