#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char source[] = "Hello, world!";
    char destination[20];
    memcpy(destination, source, strlen(source) + 1);

    printf("Destination: %s\n", destination);
    return 0;
}
 
