#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    bool isPrime = true;

    // Մուտքագրում ենք թիվը
    printf("Մուտքագրեք թիվ: ");
    scanf("%d", &number);

    // Պարզ թվերի ստուգում
    if (number <= 1) {
        isPrime = false; // Պարզ թվերը պետք է լինեն 1-ից մեծ
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d-ը պարզ թիվ է։\n", number);
    } else {
        printf("%d-ը պարզ թիվ չէ։\n", number);
    }

    return 0;
}

