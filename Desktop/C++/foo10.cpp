

	/*for(int i = 0; i <= 5; ++i){
	std::cout <<"Numbers:" << i << std::endl;
  }*/
#include <iostream>
int main(){
	int sum = 1, i = 1;

	while (i <= 4){
	sum *= i;
	++i;
}
   std::cout <<"The Sum Is:" << sum << std::endl;
        return 0;
}
/*	int number = 0;
	
	do {
	std::cout <<"Enter The Number:";
	std::cin >> number;
} while (number <= 0);

	std::cout <<"Your Number is:" << number <<std::endl;
*/

/*	int foo(int num1,num2){
	return num1 + num2;
}
*/
/*	int num1 = 0, num2 = 0, result = 0;
	std::cout << "Enter two numbers:";
	std::cin >> num1 >> num2;
	result = num1 + num2;

	std::cout << "The Sum is:" << result << std::endl;
*/

/*class test12 {
	int a;
	double b;
	char name;
	float sum;
};

int main(){
	std::cout << "Test size is: " <<sizeof(test12) << "bayt" << std::endl;
	return 0;

} */


/*#include <iostream>
#include <set>
int main(){

	std::set<int> numbers = {5, 2, 8, 3, 5, 2};
	for(int num : numbers){
	   std::cout << num << "NEW ";
    }

	return 0;
}*/


/*#include <iostream>

int main() {
    int a = 10;
    int b = 5;

    auto add = [&a, &b]() -> int {
        a += 2; // Կրճատում ենք a-ն
        b += 3; // Կրճատում ենք b-ն
        return a + b;
    };

    std::cout << "Գումար՝ ըստ հղման: " << add() << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl; // Ցուցադրում ենք փոփոխված արժեքները
    return 0;
}*/







	
	 
