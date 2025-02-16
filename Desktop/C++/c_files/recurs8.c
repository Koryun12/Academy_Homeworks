#include <stdio.h>

int main()

{

	int arr[5];
	printf("Please Enter five numbers:");
	int index = 0;
	while (index < 5){
	scanf("%d", &arr[index]);
	++index;
  }

	index = 0;
	int sum = 0;
	while(index < 5) {
	sum += arr[index];
	++index;
}
	printf("The Sum is = %d ",sum);
}	
