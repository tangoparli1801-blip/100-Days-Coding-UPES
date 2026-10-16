#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter lengths of sides of a triangle.\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if ((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a))
	{
	printf("Triangle is isosceles.");
	}
	else if (a==b && b==c){
		printf("Triangle is equilateral.");
	}
	else {
		printf("Triangle is scalene.");
	}
	
	
	return 0;
}