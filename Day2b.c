#include <stdio.h>
int main () {
	float r,area,circu;
	printf("Enter radius of circle:\n ");
	scanf("%f",&r);	
	circu = 2*3.14*r;
	area = 3.14*r*r;
	printf("%f\n%f",area,circu);
	return 0;
}