#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the numbers you want to add:\n");
	scanf("%d%d",&a,&b);
	int sum = a + b;
	printf("%d",sum);
	return 0;
}