#include <stdio.h>

int main()
{
	const int size = 4;
	int arr[size];
	arr[0] = 12;
	arr[1] = 21;
	arr[2] = 34;
	arr[3] = 45;
	
    /*for(int i = 0; i < size; ++i){
	printf("%d \n",arr[i]);
  } */

	int* ptr = &arr[0];
	for (int i = 0; i < size; ++i){
	  printf("%d \n", *ptr);
	++ptr;
  }
}
