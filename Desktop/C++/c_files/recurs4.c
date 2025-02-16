#include <stdio.h>
#include <ctype.h>

char findFirstUppercase(const char *str) {
    if (*str == '\0') {
        return '\0'; 
    }

    if (isupper(*str)) {
        return *str; 
    }

    return findFirstUppercase(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char result = findFirstUppercase(str);
    if (result != '\0') {
        printf("The first uppercase letter is: %c\n", result);
    } else {
        printf("No uppercase letter found.\n");
    }

    return 0;
}

