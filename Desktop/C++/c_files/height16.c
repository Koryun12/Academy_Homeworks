#include <stdio.h>

void print_pattern() {
    int height = 7; 
    int width = 11; 

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if ((i == 1 && j == width / 2 + 1) || 
                (i == 2 && (j == width / 2 - 2 || j == width / 2 + 4)) || 
                (i == 3 && (j == 1 || j == width)) || 
                (i == 4 && (j >= 1 && j <= width)) || 
                (i >= 5 && i <= 6 && (j == 1 || j == width)) || 
                (i == 7 && (j >= 1 && j <= width))) { 
                printf("*");
            } else {
                printf(" "); 
            }
        }
        printf("\n"); 
    }
}

int main() {
    print_pattern(); 
    return 0;
}

