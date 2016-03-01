#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* PositionError(int*,int,int);
void main() {
	int arr[100],n,i=0,*result,num;
	printf("Enter the Size of The Array: ");
	scanf("%d", &n);
	result = (int*)malloc((n+1)*sizeof(int));
	printf("Enter Elements: ");
	for (i = 0; i <n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the Element u Want to Insert into Array");
	scanf("%d", &num);
	result = PositionError(arr,num,n);
	printf("The Array is: ");
	for (i = 0; i <=n; i++) {
		printf("%d \n", result[i]);
	}
	scanf("%d", &i);
}
int* PositionError(int *ptr,int num,int n) {
	int i = 0,j=0,size=n,*strt,temp2=0,start=0,end=n,mid=(start+end)/2;
	strt = (int*)malloc(n + 1 * sizeof(int));
	strt = ptr;
	/*	for (i = 0; ptr[i]<num; i++) {
		j++;
	} */
	while (ptr[start] != ptr[end]) {
		if (ptr[start] < num) {
			start = mid;
		}
		if (ptr[start] > num) {
			end = mid;
		}
	}
	j = mid;
	while (j <= n) {
		printf(" The VALUE OF J is :%d \n", j);
		printf("%d -- \n", ptr[j]);
		temp2 = ptr[j];
		ptr[j] = num;
		num = temp2;
		j++;
	}
	return strt; 
}