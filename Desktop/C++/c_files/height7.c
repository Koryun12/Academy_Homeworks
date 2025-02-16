#include <stdio.h>

int main() {
    int a, b, count = 0;

    // Մուտքագրել a և b
    printf("Մուտքագրեք երկու ամբողջ թիվ (a և b):\n");
    scanf("%d %d", &a, &b);

    // Համոզվենք, որ a <= b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Հաշվում ենք 5-ին բաժանվող թվերը
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            count++;
        }
    }

    // Արդյունքը տպում ենք
    printf("[a, b] միջակայքում 5-ին բաժանվող թվերի քանակը: %d\n", count);

    return 0;
}


