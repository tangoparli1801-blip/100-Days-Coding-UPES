#include <stdio.h>
int main(){
	int n,fact,i;
	printf("Enter a number to know it's factors\n");
	scanf("%d",&n);
	if(n>=0){
		printf("Factors are:\n");
		for(i=1;i<=n;i++){
			fact = n%i; 
			if(fact==0){
				printf("%d ",i);
			}
			else{
				continue;
			}
			
		}
	}
	else{
		printf("Invalid input.");
	}
	
	return 0;
}