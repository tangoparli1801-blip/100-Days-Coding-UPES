#include <stdio.h>
int main(){
	int l,b,peri,area;
	printf("Enter length and breadth of rectangle: \n");
	scanf("%d%d",&l,&b);
	
	peri= 2*(l+b);
	area = l*b;
	printf("Perimeter is %d and Area is %d",peri,area);
	return 0;
}