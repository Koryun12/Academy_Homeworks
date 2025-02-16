#include <stdio.h>
#include <stdlib.h>

int diagonalSum(int n, int **matrix){
	int sum = 0;
	for(int i = 0; i < n; ++i){
	   for(int j = 0; j < n; ++j){
		if(i==j){
		    sum += matrix[i][j];
		}
		if(i + j == n - 1) {
		    sum += matrix[i][j];
             }
    	   }
	}
		return sum;
}

int main(){

	int n = 0;

	int sum = 0;
		printf("Please Enter size of matrix: \n");
		scanf("%d", &n);
	int** matrix = (int**) malloc(sizeof(int*) * n);
	
	for(int i = 0; i < n; ++i){
 		matrix[i] = (int*) malloc(sizeof(int) * n);
	}
	printf("Enter elements of matrix\n");
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("%d \n",diagonalSum(n,matrix));
	
	for(int i = 0; i < n; ++i) {
		free(matrix[i]);
	}	
	free(matrix);

	return 0;
}

		
	

