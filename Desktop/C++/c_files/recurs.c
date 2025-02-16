#include <stdio.h>


	int printNumbers (int n) {

	if( n < 0){

		return;

	}
	printf("%d ",n );
	printNumbers(n-1);


}

	int main(){
	int n ;
	printf("Enter The Number: ");
	scanf ("%d", &n);
	if (n < 0) {
	printf("Please Enter The Number: ");

	}else {
	printf("Numbers %d and 0 is :\n", n);
	printNumbers(n);
	printf("\n");
}






return 0;
}

