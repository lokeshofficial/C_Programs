#define _CRT_SECURE_NO_WARNINGS	//for no warnings
#include<stdio.h>	/// includes header files
#include<conio.h>
#include<stdlib.h>
int* larger2Values(int[],int);//declare function
void main() {
	int *a,size,*result,i=0;//a pointer to read array variables and ,*result to Print 2 Largest Variables,size=length of the array
	printf("Enter the Size of The Array: ");// Prompts user to enter size of the array
	scanf("%d", &size);//read size from the user
	printf("Enter Elements: ");// Prompt user to enter elements of the array
	a = (int *)malloc(size*sizeof(int));//initializes array with the size given by the user
	while (i < size)//running loop until i < size
		scanf("%d", &a[i++]);//read values from the user keyboard
	result = larger2Values(a,size);//passing array ,size of the arrray to the function which gives us largest 2 values
	printf("The First Larger Value: %d \n", *result++);//printing FirstLargest Value
	printf("The Second Larger Value: %d", *result);//printing SecondLargestValue
	scanf("%d", &i);
}
int* larger2Values(int a[],int size) { // initialize function
	int *ptr,*sptr;//pointers to store array
	sptr = (int *)malloc(sizeof(int));
	ptr = (int *)malloc(sizeof(int));
	ptr = a;int big1=0, big2=0;// declaring two variables as big1,big2 and initializes with 0
	int i=0,j;//i,j used for iteration
	if (a[1]>a[2]){	//	checking for the array first value with second value
		big1 = a[1];//if first value is big the assign it to big1
	}
	else{
		big2 = a[1];//if first value is not big then assign it to big2
	}

	for (i = 0; i < size; i++) {	// loop to get largest 2 numbers from the array until the size of the array
		if (big1<a[i]) {	//checking the largest value with other array elements
			big2 = big1;	//if big1 value is lesser than current array value then replace the big2 value with big1 value
			big1 = a[i];	// replace the big1 value with currect array element
			if (big1 < big2) {//if big1 is less than big2 then swap them 
				big1 = big1 + big2;
				big2 = big1 - big2;
				big1 = big1 - big2;
			}
		}
	}
	*ptr = sptr;	// after the checking the big1 and big2 elements are orders with pointer and return pointer to called function
	*sptr++ = big1;
	*sptr = big2;
	return *ptr;

}