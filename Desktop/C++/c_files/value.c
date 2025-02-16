#include <stdio.h>

void swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;

}
int main()

{
	int a = 4;
	int b = 5;
	printf("a = %d, b = %d \n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d \n", a, b);


}
