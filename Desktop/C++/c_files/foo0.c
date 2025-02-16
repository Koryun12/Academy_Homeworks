#include <stdio.h>
#include <stdlib.h>
int main()

{
	int size = 0 ;
	
	printf("Enter the array size:");
	scanf("%d", &size);

	int* array = (int*)malloc(size * sizeof(int));

	printf("Enter %d elements: ", size);
	   for(int i = 0; i < size; ++i){
	scanf("%d", &array[i]);
   }

	int sum = 0;
	int product = 1;
	   for(int i = 0; i < size; ++i){
	sum += array[i];
	product *= array[i];
}

	printf("Sum of elements: %d\n", sum);
	printf("Product of elements: %d\n", product);
	
	free(array);
	return 0;
	



}
