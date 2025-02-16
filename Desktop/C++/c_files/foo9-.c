#include <stdio.h>
#include <stdlib.h>

int foo(int n, int **matrix){
int sub = 0;
	for(int i = 0; i < n; ++i){
    	   for(int j = 0; j < n; ++j){
  		if(i==j){
		   sub -= matrix[i][j];
          }					
		if(i + j == n - 1){
	  	   sub -= matrix[i][j]; 	
 	  }
       } 	
    }	
		return sub;
}
	
int main()
{
int sub = 0;
int n = 0;
	printf("Enter Size of matrix: \n");
	scanf("%d",&n);
int** matrix = (int**) malloc(sizeof(int*) * n);

	for(int i = 0; i < n; ++i){
matrix[i] = (int*) malloc(sizeof (int) * n);
	
	printf("enter elements of matrix:");
	for(int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j ){
		
			scanf("%d",&matrix[i][j]);

	     }
	}	   
		 
	printf("The sub is %d\n:", foo(n,matrix));	
}	
	for(int i = 0; i < n; ++i){
	free(matrix[i]);
}
	free(matrix);
			
			
	return 0;
}
	
