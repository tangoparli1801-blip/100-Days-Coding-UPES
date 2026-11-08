#include <stdio.h>
int main(){
	int i,fact,n;
	printf("Which number Factorial do you want?\n");
	scanf("%d",&n);
	if(n<0){
		printf("Invalid input");
	}
	else{
		fact = 1;
		for(i=1;i<=n;i++){
			fact = fact*i;
		}
		printf("Factrial of %d is %d",n,fact);
	}
	
	
	
	
	
	
	return 0;
}