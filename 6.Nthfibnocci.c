#define _CRT_SECURE_NO_WARNINGS		// FOR NO Warning errors
#include<stdio.h>		// including headers
#include<conio.h>
#include<stdlib.h>
int nthfib(int);	//delcaring function
void main() {
	int n,result;	// n to read input,result to print nth fibnocci number
	printf("Enter N Value: ");// prompt user to input number
	scanf("%d", &n);// read number from user's keyboard
	result = nthfib(n);// send input to function
	printf("The Value is: %d", result);//print result
	scanf("%d", &n);
}
int nthfib(int n) {// initializing function
	int a = 0, b = 1,c;// for fibnocci series a,b,c
	int i = 0;
	while (i < n-2) { // until i<n-2 , n-2 because 0,1 r already a,b to add
		c = a + b;	// addition of a+b;
		a = b;	// 
		b = c;
		i++;	// increment i
	}
	return c;	// return nth fibnocci 
}