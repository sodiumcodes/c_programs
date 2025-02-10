/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/

#include<stdio.h>
int main(){
	unsigned short physics, chemistry, biology, mathematics, computer;
        
	//Input marks from user

	printf("Enter the marks:\n");
	printf("1.Physics: ");
	scanf("%hu\n" , &physics);
	printf("2.Chemistry: ");
	scanf("%hu\n" , &chemistry);
	printf("2.Chemistry: %d\n", chemistry);
	printf("3.Biology: ");
	scanf("%hu" , &biology);
	printf("3.Biology: %d\n", biology);
	printf("4.Mathematics: ");
	scanf("%hu" , &mathematics);
	printf("4.Mathematics: %d\n", mathematics);
	printf("5.Computer: ");
	scanf("%hu" , &computer);
	printf("5.Computer: %d\n", computer);

	//Finding percentage

	float per= (physics+ chemistry+ biology+ mathematics+ computer)/5;
 	printf("Percentage= %f\n", per);

	//Grade according to percentage

	if( per>= 90){
		printf("Your grade is A");
	}
	else if( per>= 80){
		printf("Your grade is B");
	}
	else if( per>= 70){
		printf("Your grade is C");
	}
	else if( per>= 60){
		printf("Your grade is D");
	}
	else if( per>= 40){
		printf("Your grade is E");
	}
	else{
		printf("Your grade is F");
	}
	return 0;
}
