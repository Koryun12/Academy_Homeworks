#include <stdio.h>
   
   
           int printNumbers (int n,int current) {
   
           if(current < n ){
   
                   return n;
   
          }
          printf("%d ",current );
	  return printNumbers(current+1,n);
  
  
  }
  
          int main(){
          int n ;
          printf("Enter The Number: ");
          scanf ("%d", &n);
          if (n < 0) {
          printf("Please Enter The Number: ");
	
 	}else{
	printf("Numbers 0 to %d is:\n", n);
	printNumbers(0, n);
	printf("\n ");


} 
return 0;
}
