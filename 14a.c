#include <stdio.h>
int main(){
	int i,m,n;
	int sum = 0;
	printf("Enter the terms til you want the sum of odd numbers:\n");
	scanf("%d",&n);
	
	m = 2*n-1;
	
	for(i=1;i<=m;i+=2){
		sum = sum + i;
	}
	
	printf("The sum of %d odd numbers is %d.",n,sum);
	
	return 0;
}
