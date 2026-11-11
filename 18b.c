#include <stdio.h>
int main(){
	int b,a,fact1,fact2,i,hcf =1;
	printf("Enter two numbers whose HCF you want to find:\n");
	scanf("%d%d",&a,&b);
	
	for(i=1;i<a+b;i++){
		fact1 = a%i;
		fact2 =b%i;
		if(fact1==0 && fact2==0){
			hcf = i;
		}
			
	}
	printf("%d is HCF of %d and %d",hcf,a,b);
	
	
	
	return 0;
}


