#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    printf("Մուտքագրեք զանգվածի չափսը: ");
    scanf("%d", &n);

    
    int arr[n];

    
    printf("Մուտքագրեք զանգվածի %d էլեմենտները:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    average = sum / n;

    
    printf("Զանգվածի էլեմենտների միջին թվաբանականը: %.2f\n", average);

    return 0;
}

