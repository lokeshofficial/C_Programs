#define _CRT_SECURE_NO_WARNINGS // For Getch in Visual Studio
#include<stdio.h>		//Include Header Files
#include<conio.h>
#include<stdlib.h>
long int SumAllDigits(long int);	//Declare Function
void main() {
	long int num;
	int i = 0, result; // i to Stop Ouput for a While, num:Read Number From User,result:Print Result
	printf("Enter Number"); // Ask User to Enter Number
	scanf("%ld", &num);//Read Data From the User
	result = SumAllDigits(num);//Passing Argument to Function
	printf("Sum of All Digits : %ld", result);// Prin
	scanf("%d", &i); // stopping output for a while
}
long int SumAllDigits(long int number) {
	int i = 0;//i For Iteration
	long int result = 0;//Default result=0
	//printf("The Number is %ld:", number);
	while ((number / 10) != 0){  // while division of number not equal to zero
		result += ( long int)number % 10; // add remainder to the result;
	//	printf("%ld-- \n", (number % 10));
	//	printf("%ld \n", result);
		number = number / 10;// replace the number by division it by 10
	}
	result += (long int)number % 10; // after all the remainder add to result for last digit in the number Eg: 0.1,0.5 Etc.,	
	return result; // return result to called function
}