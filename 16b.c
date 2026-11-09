#include <stdio.h>
int main(){
	int org,n,r,rem;
	printf("Enter the number:\n");
	scanf("%d",&n);
	r = 0;
	org = n;
	while(n!=0){
		rem = n%10;
		r = r*10+rem;
		n /= 10;
	}
	if(r==org){
		printf("Number is pallindrome.");
	}
	else{
		printf("Number is not pallindrome");
	}	
	
	return 0;
}