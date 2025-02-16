#include <stdio.h>

	int rec(int num){
        static int sum = 1;
	if(num == 0){
		return sum;
	}

	//return(num %10 * rec(num/10));
 	sum *= num % 10;
	num = num / 10;
	rec(num);
	
}
	int main(){

	int num = 0;
	printf("Enter The Number");
	scanf("%d", &num);
	printf("The Result is: %d", rec(num));
	
 return 0;

}
