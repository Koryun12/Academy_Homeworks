/*#include <stdio.h>


int main() {
    int *ptr = NULL; 

    
    if (ptr == NULL) {
        printf("The pointer is NULL.\n");
    } else {
        printf("The pointer is not NULL.\n");
    }

    return 0;
}
*/
#include <stdio.h>

int main() {
    int num = 42;        
    int *ptr = NULL;     

    ptr = &num;       

    printf("The value of num is: %d\n", *ptr);
    printf("The address of num is: %p\n", (void*)&num);
    printf("The value of the pointer (address of num) is: %p\n", (void*)ptr);

    return 0;
}


