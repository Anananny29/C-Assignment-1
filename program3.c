#include<stdio.h>
void main(){

	int x = 19;
	int p =19;
	int y = x++ + --x - x++;
	int z = --p + p-- - p++ + ++p;

	printf("%d\n",y);
	
	printf("%d\n",z);


	

}
