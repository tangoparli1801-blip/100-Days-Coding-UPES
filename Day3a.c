#include <stdio.h>
int main() {
	float  C,F;
	printf("Enter the value of temperature in degree celsius:\n");
	scanf("%f",&C);
	
	F = (C*1.8) + 32;
	printf("Temperature in fahrenheit is: %.2f",F);
	return 0;
}