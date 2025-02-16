#include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        if (i == 3 || i == 5 || i == 15) {
            continue; // Skip 3, 5, and 15
        }
        printf("%d\n", i);
    }
    return 0;
}

