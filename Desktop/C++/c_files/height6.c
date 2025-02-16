#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Զանգվածի չափը
    int *array; // Ցուցիչ դինամիկ հատկացված զանգվածի համար

    // Մուտքագրում ենք զանգվածի չափը
    printf("Մուտքագրեք զանգվածի չափը: ");
    scanf("%d", &n);

    // Հատկացնում ենք հիշողություն
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) { // Ստուգում ենք՝ արդյոք հատկացումը հաջողվել է
        printf("Հիշողության հատկացումը ձախողվեց!\n");
        return 1;
    }

    // Մուտքագրում ենք զանգվածի արժեքները
    printf("Մուտքագրեք զանգվածի %d տարրերը:\n", n);
    for (int i = 0; i < n; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    // Տպում ենք զանգվածի արժեքները
    printf("Զանգվածի արժեքները հետևյալն են:\n");
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Ազատում ենք հատկացված հիշողությունը
    free(array);
    array = NULL; // Ցուցիչը դնում ենք NULL՝ dangling pointer-ից խուսափելու համար

    return 0;
}

