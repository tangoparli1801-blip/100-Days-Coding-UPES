#include <stdio.h>
int main(){
	int n,r,rem,org=0;
	printf("Enter the number whose digits sum you want:\n");
	scanf("%d",&n);
	if(n>=0){
		org = n;
		r = 0;
		while(n!=0){
			rem = n%10;
			r = rem + r;
			n = n/10;
		}
		printf("%d is the sum of digits of %d",r,org);
	}
	else{
		printf("Invalid Output.");
	}
	
	
	
	
	return 0;
}

