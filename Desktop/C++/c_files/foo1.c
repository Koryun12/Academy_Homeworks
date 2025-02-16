#include <stdio.h>
#include <stdbool.h>

int calculate(char opcode,int num1,int num2)
{
	printf("Calculate is called: \n");
	if(opcode == '+'){
	  return num1 + num2;
  }

	if(opcode == '-'){
	  return num1 - num2;
  }
	if(opcode == '*'){
	  return num1 * num2;
  }

	if(opcode == '/'){
	if(num2 == 0){
	return 0;
}
	  return num1 / num2;
  }
}
	
int main()
{

	int num1,num2,result;
	char opcode;	
 printf("Enter the opcode! \n");
	scanf("%c %d %d", &opcode, &num1,&num2);
	result = calculate(opcode, num1, num2);
	printf("%d \n",result);
	
	


}



