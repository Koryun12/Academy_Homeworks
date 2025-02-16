#include <stdio.h>

	int average(int num1, int num2, int num3)
 { 
	return (num1 + num2 + num3) / 3;
  }

	void foo(void){
	printf("Hello World:\n");
  }

	void f2()
{
	foo();
	int x = 20;
	printf("%d \n", x);

}
int main()
{
	printf("First \n");
	f2();
	printf("Last \n");
	foo();
    }
