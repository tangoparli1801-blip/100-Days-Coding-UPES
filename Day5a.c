#include <stdio.h>
#include<math.h>
int main(){
	float c,s,i,p,t,r;
	printf("Enter the principal amount,rate of interest , time :\n");
	scanf("%f%f%f",&p,&r,&t);
	
	c = p*pow(1+r/1200,12*t)-p;
	s = p*r*t/100;
	
	printf("%f\n%f",c,s);
	return 0;
}