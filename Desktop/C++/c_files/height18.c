#include <stdio.h>
 int main(){
  int num1 = 0;
  int num2 = 0;
  int result = 0;
	printf("Enter The Two Numbers");
	scanf("%d %d",&num1,&num2);

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	result = num1 ^ num2;
	printf("The Result is %d", result);
 return 0;
}
