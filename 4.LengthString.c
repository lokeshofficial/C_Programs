#define _CRT_SECURE_NO_WARNINGS		// for no warnings
#include<stdio.h>	//includes header files
#include<conio.h>
#include<stdlib.h>
#define getch()
int lengthOfString(char*);	//initializing function
void main() {
	char *string, c;//declaring pointers *string to read,c to read characters from the keyboard
	int length = 10, count = 0; int i; // length=10,count to count characters,i to stop output
	string = (char*)malloc(sizeof(char));	// delaring string pointer 
	printf("Enter String: ");//ask user to enter data
	while (EOF !=(c = getchar()) && c != '\n') {	// read characters from keyboard using getchar and it must on equal to eof and new line '\n'
		string[count++] = c;	//place character in characterpointer and increase pointer 
		if (count == length) {	//checking the length == count 
			string = realloc(string, (length += 10)*sizeof(char));// if length == count, reallocate memory for another 10 characters
		}
	}
	string[count] = '\0';//atlast place NULL character for recognizing the string end
	length =(int) lengthOfString(string);// pass string to function which return length of the string
	printf("The Length Of the String is: %d", length);//print length of the string
	scanf("%d", &i);
}
int lengthOfString(char *str) {
	int i = 0, length = 0;//initial length=0,i for iteration
	while (str[i++] != '\0') {
		length++;// increment length until u get NULL value
	}
	return length;// return length to the called function
}