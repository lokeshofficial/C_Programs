#define _CRT_SECURE_NO_WARNINGS	// for no warnings
#include<stdio.h>	// including headers
#include<conio.h>
#include<stdlib.h>
int asciiCharAdd(char *);//declaring function
void main() {
	int size, i, result;// declaring variables
	char *string, *str;
	str = (char *)malloc(sizeof(char));// initializing length for string
	printf("Enter Array Size: ");//prompt user to enter size of the array
	scanf("%d", &size);//read size from the user
	string = (char *)malloc(size*sizeof(char));//  initializing length for string with the size given by user
	printf("Enter Array Elements: ");// Prompt for Enter Elements
	//printf("%d", size);	
	for (i = 0; i < size; i++) {//reading elements from the user
		scanf("%s", &string[i]);
	}
	result = asciiCharAdd(string);// calling function with the array 
	printf("The Addition of All Ascii Characters in The Array is : %d", result);//print result
	scanf("%d", &i);
}
int asciiCharAdd(char *str) {//initializing function
	int sum = 0, size = 0, i, temp;//sum for summing,size of array size,i for looping temp to store temporary variable
	char *pstr = str;//pstr to store string starting address
	while (*pstr++ != '\0')//calculating size
		size++;
	for (i = 0; i < size; i++) {// running till the end of the string
		temp = (int)*str++; // temp to store variable temporarily
		sum += temp;	// adding temp to sum
	}
	return sum;//return sum
}