#include<stdio.h>

void main(){


	int n;

	printf("Enter a number : ");
	scanf("%d",&n);

	if(n < 10){

		printf("number is less than 10\n");
	}else if(10 < n && n < 20){

		printf("number is greater than 10 but less than 20\n");
	}else{

		printf("Happy Coding\n");
	}
}

