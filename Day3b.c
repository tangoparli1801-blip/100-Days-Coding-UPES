#include <stdio.h>
int main(){
	int a,b,temp;
	a=4;
	b=5;
	
	//now changing values
	temp = a;
	a=b;
	b=temp;
	printf("%d\n%d",a,b);
	
	return 0;
}