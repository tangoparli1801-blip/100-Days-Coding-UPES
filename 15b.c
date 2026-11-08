#include <stdio.h>
int main(){
	int n,r,rem;
	printf("Enter your number:\n");
	scanf("%d",&n);
	r = 0;
	while(n!=0){
		rem = n%10;
		r = r*10+rem;
		n /= 10;
	}
	
	
	printf("Reversed number:%d\n",r);
	
	
	
	return 0;
}