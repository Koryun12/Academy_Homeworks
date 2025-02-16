#include <iostream>
   
           int foo(int a, int b){
                   return a * b;
   
     }
   
   int main(){
           int a = 0;
           int b = 0;
           int result = 0;
            std::cout << "Please Enter Two Numbers!" << std::endl;
            std::cin >> a >> b;
          result = foo(a, b);
            std::cout << "The Result is! " << result << std::endl;
  
  return 0;
  
  
  }
