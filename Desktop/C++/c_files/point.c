#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL;

   
    if (ptr == NULL) {
        printf("Pointer is NULL \n");
    }

 
    ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocated is failied\n");
        return 1;
    }

    *ptr = 42;  
    printf("Pointer value is՝ %d\n", *ptr);

    free(ptr);  
    return 0;
}

