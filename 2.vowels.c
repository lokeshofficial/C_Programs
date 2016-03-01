// Aim: To Remove Digits and Vowels From The String Given By The User
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char* VowelsNDigits(char *);
void main() {
	char *string, *result;
	string = (char*)malloc(10 * sizeof(char*));
	result = (char*)malloc(10 * sizeof(char*));
	printf("Enter String: ");
	scanf("%s", string);
	result = VowelsNDigits(string);
	printf("Converted String is %s", result);
	scanf("%s", string);
}
char* VowelsNDigits(char* string) {
	char *str, *ptr, *p;
	int i = 0, j = 0,ch;
	str = (char*)malloc(sizeof(char));
	ptr = (char*)malloc(sizeof(char));
	p = ptr;
	str = string;
	printf("%s \n", str);
	while (str[i] != '\0') {
		ch = (int)str[i];
		printf("%d \n", ch);
			if((ch >= 65 && ch <= 90) || (ch >= 98 && ch <= 122)) {
				ptr[j++] = str[i];
			}
			i++;
	}
	ptr[j] = '\0';
	return ptr;
}