#define _CRT_SECURE_NO_WARNINGS	// for no warnings
#include<stdio.h>		// include header files
#include<conio.h>
#include<stdlib.h>
int StringNumberComp(char*);	// declare function
void main() {
	char *string;	// declare char pointer to read string
	int result;		// result from the function
	string = (char*)malloc(10 * sizeof(char));// initial the string with default size
	printf("Enter String: ");//prompt message to input string
	scanf("%s", string);//read from user
	result = StringNumberComp(string);//send string to function
	printf("The Greater Value is %d", result);//print result
	scanf("%s", string);
}
int StringNumberComp(char *str) {// initialize function
	int num1 = 0, num2 = 0, i = 0, j = 0;//declare variables 
	for (i = 0; str[i] != ','; i++) {	// seperate first number using loop 
		num1 = num1 * 10 + str[i] - '0';
	}
	for (i=i+1; str[i] != '\0'; i++)	// seperate second number using loop
		num2 = num2 * 10 +str[i] - '0';
	//printf("%d \n", num1);
	//printf("%d \n", num2);
	if (num1 > num2)// check which number is greater
		return num1;
	else
		return num2;
}