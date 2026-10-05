#include <stdio.h>
int main(){
	int n,calc;
	printf ("Enter the number to check even or odd:\n");
	scanf("%d",&n);
	calc = n%2;
	if(calc != 0){
		printf("Number is Odd");
	}
	else{
	printf("Number is Even");
	}
	
	return 0;
}