#include <stdio.h>
 
int main() {
    int n, i;
    unsigned long long product = 1; 
    int sum = 0;

     
    printf("Enter The Array Size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The Correct Array Size:\n");
        return 1;
    }

    int array[n]; 

    printf("Enter The Array %d Elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];      
        product *= array[i];   
    }
 
    printf("The Array Elemetns Sum: %d\n", sum);
    printf("The Array Elements Mul: %lld\n", product);

    return 0;
}

