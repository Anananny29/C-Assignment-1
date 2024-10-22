#include<stdio.h>

void main(){

	int n;

	printf("Enter a number : ");
	scanf("%d",&n);

	if(n % 3 == 0){

		printf("Number is divisible by 3\n");

	}else{

		printf("Number is not divisible by 3\n");
	}
}
