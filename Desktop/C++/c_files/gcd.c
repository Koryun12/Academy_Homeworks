#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int gcdArray(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return gcd(arr[n - 1], gcdArray(arr, n - 1));
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The GCD of the array is: %d\n", gcdArray(arr, n));

    return 0;
}       
