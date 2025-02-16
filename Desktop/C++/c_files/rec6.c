#include <stdio.h>

int sum_of_digits(int num) {
    if (num == 0) {
        return 0; 
    }
    return (num % 10) + sum_of_digits(num / 10); 
}

int main() {
    int number;
    printf("Enter The Number: ");
    scanf("%d", &number);
    
   
    if (number < 0) {
        number = -number;
    }

    printf("Number additional: %d\n", sum_of_digits(number));
    return 0;
}

