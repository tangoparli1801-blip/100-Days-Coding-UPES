#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	int sum,diff,product,quot;
	sum = a + b;
	product = a*b;
	diff = a-b;
	printf("%d\n%d\n%d\n",sum,diff,product);
	quot = (b != 0) ? 1:0;
	quot == 1 ? printf("%d",a/b):printf("CANT DIVIDE BY 0");
	return 0;
}