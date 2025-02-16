#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int temp[size]; // Ժամանակավոր զանգված
    int start = 0;  // Զույգերի տեղադրության ցուցիչ
    int end = size - 1; // Կենտերի տեղադրության ցուցիչ

    // Կազմակերպում ենք զանգվածը
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            // Զույգը տեղադրում ենք սկզբում
            temp[start++] = arr[i];
        } else {
            // Կենտը տեղադրում ենք վերջում
            temp[end--] = arr[i];
        }
    }

    // Վերագրում ենք փոփոխված զանգվածը սկզբնական զանգվածին
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;

    // Հարցնում ենք զանգվածի չափը
    printf("Mutqagreq zangvaci chapy: ");
    scanf("%d", &n);

    int arr[n];

    // Մուտքագրում ենք զանգվածի տարրերը
    printf("Mutqagreq zangvaci tarery:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Կատարում ենք փոխակերպումը
    rearrangeArray(arr, n);

    // Տպում ենք արդյունքը
    printf("Ardyunak zangvac: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

