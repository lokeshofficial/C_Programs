#define _CRT_SECURE_NO_WARNINGS		// for no warnings
#include<stdio.h>		//including headers
#include<conio.h>
#include<stdlib.h>
int CountGreaterNumber(int*,int,int);// declaring function
void main() {
	int *a, size, count = 0,i=0,num;// declaring variables a for array count for result ,i for iteration,num for number 
	printf("Enter Size of The Array: ");// prompt user to input size
	scanf("%d", &size);// read input from standart input (keyboard)
	a = (int*)malloc(size*sizeof(int));// initalizing pointer array of size given by the user
	printf("Enter Array Elements in a Sorted Order: ");// prompt user to enter elements
	for (i = 0; i < size; i++)//reading elements
		scanf("%d", &a[i]);
	printf("Enter Number: ");// prompt message to enter number
	scanf("%d", &num);// read number from user
	count = CountGreaterNumber(a,size,num);//call function by passing formal parameters to it
	printf("The Count is: %d", count);//print the count;
	scanf("%d", &size);
}
int CountGreaterNumber(int *ar,int n,int number) {//initializing elements
	int i = 0;//for iteration
	for (i = 0; ar[i] < number;)// checking element for greater number or not
		i++;
	return n - i;// return count
}