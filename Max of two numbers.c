#include <stdio.h>
int main(){
	int a,b,*ptr1,*ptr2;
	printf("Enter two numbers:\n ");
	scanf("%d%d",&a,&b);
	*ptr1 = &a;
	*ptr2 = &b;
	if(ptr1>ptr2){
		printf("First number is greater than Second.");
	}
	else{
		printf("Second number is greater than First.");
	}
	
	return 0;
}