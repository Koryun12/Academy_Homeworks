#include <stdio.h>

int SecondMax(int arr[], int n){
int first = 0;
int second = 0;
	for(int i = 0; i < n; ++i){
		if(arr[i] > first){
 			second = first;
			first = arr[i];
      } else if (arr[i] > second && arr[i] != first){
		second = arr[i];
      }
   }
	return second;
}

int main()
{
int n = 0;
	printf("Enter Size Of Array:");
	scanf("%d", &n);
int arr[n];
	  for(int i = 0; i < n; ++i){
	printf("Enter Elements Of Array:\n", arr[i] + 1);
	scanf("%d", &arr[i]);
   }
	int second = SecondMax(arr,n);
	printf("The Second Maximum is %d ",second);

	return 0;
}
