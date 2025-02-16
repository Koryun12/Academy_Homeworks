#include <stdio.h>
 
typedef struct
{
	char name[10];
	double avg;

} Student;

int main(int argc, char** argv)
{
	Student students[3];
	for(int i = 0; i < 3; ++i){
	    printf("Please Enter The Students Name and AVG:");
	    scanf("%s", students[i].name);
	    scanf("%lf", &students[i].avg);
	}     
	if(students[0].avg > students[1].avg){
	   printf("Congratulations %s Jan!", students[0].name);
  	}

}
