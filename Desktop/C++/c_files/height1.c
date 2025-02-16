#include <stdio.h>

int isPowerOfTwo(int n) {
    
    if (n <= 0) {
        return 0;
    }
    
    return (n & (n - 1)) == 0;
}

int main() {
    int num;

    
    printf("Enter The Number: ");
    scanf("%d", &num);

    
    if (isPowerOfTwo(num)) {
        printf("YES %d Number Power of 2։\n", num);
    } else {
        printf("NO %d Number Don't Power of 2։\n", num);
    }

    return 0;
}

