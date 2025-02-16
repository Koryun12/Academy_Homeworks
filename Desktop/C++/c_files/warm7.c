#include <stdio.h>

// Ֆունկցիա՝ հաշվելու թվանշանների գումարը
int calculateDigitSum(int number) {
    int sum = 0;

    // Աշխատում ենք մինչև թիվը դառնա 0
    while (number != 0) {
        sum += number % 10; // Ավելացնում ենք վերջին թվանշանը
        number /= 10;       // Հեռացնում ենք վերջին թվանշանը
    }

    return sum;
}

int main() {
    int num;

    // Մուտքագրում ենք թիվը
    printf("Մուտքագրեք թիվ: ");
    scanf("%d", &num);

    // Հաշվում ենք թվանշանների գումարը
    int result = calculateDigitSum(num);

    // Արդյունքը
    printf("Թվանշանների գումարը: %d\n", result);

    return 0;
}

