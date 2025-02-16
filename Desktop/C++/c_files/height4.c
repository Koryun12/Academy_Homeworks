#include <stdio.h>

int main() {
    int number = 0;

 
    printf("Enter The Number (Until 1-9): ");
    scanf("%d", &number);

    if (number < 1 || number > 9) {
        printf("Please Enter The Number Until 1-9:\n");
        return 1;
    }

    
    printf("Multiply Taple is %d :\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d;\n", number, i, number * i);
    }

    return 0;

}
