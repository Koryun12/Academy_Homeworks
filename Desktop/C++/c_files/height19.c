
 /*int main(){
  int myVariable = 33;
  int *ptr = &myVariable;
	printf("Address of myVariable: %p \n",(void*)&myVariable);
	printf("Address of pointer: %p \n",(void*)ptr);*/

	

/*int var1 = 10, var2 = 20;
int *ptr = &var1;
	printf("value of var1 using the pointer: %d \n", var1);

	*ptr = 30;
  	printf("Updated value of var1: %d \n", var1);*/
	
/*	char myChar = 'A';
	char *ptr = &myChar;
 printf("Address the pointer: %p \n",(void*)&myChar);
*/
#include <stdio.h>

int main() {
    int var1 = 10, var2 = 20;    // Դեպի երկու ամբողջ թվի փոփոխականներ և նշանակել արժեքներ
    int *ptr;                    // Դեպի ամբողջ թվի նշաձև

    // Տպել սկզբնական արժեքները var1-ի և var2-ի
    printf("Սկզբնական արժեքներ: var1 = %d, var2 = %d\n", var1, var2);

    // Օգտագործել նշաձևը՝ փոխելու արժեքները
    ptr = &var1;                 // Նշաձևը ցույց է տալիս var1-ի հասցեն
    *ptr = *ptr + var2;          // Եզրակացնել var1-ը և ավելացնել var2-ը՝ օգտագործելով նշաձևը (ժամանակավոր պահեստ)
    var2 = *ptr - var2;          // Համակարգել var1-ի սկզբնական արժեքը և նշանակել այն var2-ին
    *ptr = *ptr - var2;          // Համակարգել var2-ի սկզբնական արժեքը և նշանակել այն var1-ին

    // Տպել փոխված արժեքները
    printf("Փոխված արժեքներ: var1 = %d, var2 = %d\n", var1, var2);

    return 0;
}

