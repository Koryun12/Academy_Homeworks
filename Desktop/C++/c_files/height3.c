#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter The Word: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Word is good։\n");
            break;
        default:
          
            if ((ch >= 'a' && ch <= 'z')) {
                printf("Word is Bad։\n");
            } else {
                printf("Entering is not a word։\n");
            }
    }

    return 0;
}

