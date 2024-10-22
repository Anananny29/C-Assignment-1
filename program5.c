#include<stdio.h>

void main(){

	int n1, n2, temp;

	printf("Enter number 1 : ");
	scanf("%d",&n1);

        printf("Enter number 2 : ");
        scanf("%d",&n2);

	printf("Number 1 before swap : %d\n",n1);                                                                                                                                                                                                       printf("Number 2 before swap: %d\n",n2);
	temp = n1;
	n1 = n2;
	n2 = temp;

	printf("Number 1 after swap : %d\n",n1);

        printf("Number 2 after swap: %d\n",n2);



}

