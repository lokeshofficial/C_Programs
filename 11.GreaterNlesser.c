#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* gandl(int*,int,int);
void main() {
	int *a,size,i=0,*result,n;
	printf("Enter the Size of the Array: ");
	scanf("%d", &size);
	a = (int *)malloc((size+1)*sizeof(int));
	printf("Enter Elements: ");
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter The Number ");
	scanf("%d", &n);
	result = gandl(a,n,size);
	printf("The Count of Numbers Greater then the Given Number: %d \n", *result);
	printf("The Count of Numbers Lesser then the Given Number: %d", *(result+1));
	scanf("%d", &n);
}
int* gandl(int *a,int n,int size) {
	int gcount = 0, lcount=0,*result,*ptr;
	result = (int*)malloc(sizeof(int));
	ptr = (int*)malloc(sizeof(int));
	int i = 0;
	while(i<size) {
		if (a[i] >= n) {
			gcount++;
		}
		else {
				lcount++;
		}
		i++;
	}
	ptr = result;
	*result = gcount;
	(*(result+1)) = lcount;
	return ptr;
}

