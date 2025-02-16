#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; 

    
    printf("Enter The Number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("The Number Was Be Bigger than 0։\n");
    } else {
        
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("%d-s Factorial is: %llu։\n", n, factorial);
    }

    return 0;
}

