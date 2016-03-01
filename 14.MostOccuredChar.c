#define _CRT_SECURE_NO_WARNINGS		// for no warnings
#include<stdio.h>		// including headers
#include<conio.h>
#include<stdlib.h>
#define getch()
char MostOccuredChar(char *);//declare function
void main() {
	char *string,result;	// declare variables string to read string from user,result:output of the function
	int a;		// for stopping output
	string = (char *)malloc(sizeof(char));// declare string with basic length
	printf("Enter String:");//prompt user to input string
	scanf("%s", string);// read string from users
	result = MostOccuredChar(string);//call fumction with string as formal argument
	printf("Most Occured Character is: %c",result);//print result;
	getch();
	scanf("%d", &a);
}
char MostOccuredChar(char *str) {// inital function
	int count = 0,newcount=0;//declare variables for count to best count and newcount for counting variables
	int i = 0, j,size=0;// for looping
	char *ptr = str,ch,ch1=str;
	while (*ptr++ != '\0') {//finding size
		size++;
	}
	for (i = 0; i < size; i++) {//running loop to check most occured char
		ch = str[i];
		for (j = 0; j < size; j++) {	// compare with all elements and count for all characters in the string
				if (ch == str[j]) {
					newcount++;
				}
		}
		if (count < newcount) {		// if newcount is greater than count the replace with the newcount value
			ch1 = ch;
			count = newcount;
		}
		newcount = 0;	//make newcount=0 becoz it must be zero for ever character
	}
	return ch1;//return the variable to the called function
}
