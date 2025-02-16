#include <stdio.h>

void array(double* arr, int size)
{
	 for(int i = 0; i < size; ++i){
	printf("%d \n", arr[i]);
  }
}
double sum(double* arr, int size){
	double result = 0.0;
	  for(int i = 0; i < size; ++i){
   	    result += *(arr + i);
   }
	return;
}

int main()
{
	double arr[] = {1.0, 2.1, 3.2, 4,8};
	
	
}
