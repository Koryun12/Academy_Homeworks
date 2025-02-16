#include <stdio.h>

void printcounter(){

	static int counter = 0;
	printf("%d \n", counter);
	++counter;
}

int main(){
	for(int i = 0; i< 5; ++i){
	printcounter();
}

return 0;
}
