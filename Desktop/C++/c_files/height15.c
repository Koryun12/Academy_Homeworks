#include <stdio.h>

void draw_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" "); 
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*"); 
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i % 2 == 1) {
            printf("*");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter The Triangle height \n: ");
    scanf("%d", &n);

    draw_triangle(n);
    return 0;
}

