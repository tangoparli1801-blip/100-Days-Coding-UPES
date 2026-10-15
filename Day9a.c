#include <stdio.h>
#include <math.h>
int main(){
	int b,c,a;
	printf("Enter the coefficient of x^2, x and constant:\n");
	scanf("%d%d%d",&a,&b,&c);
	float power = pow (b,2);
	float root = power - 4*a*c;
	float unrt = sqrt(root);
	float sol_1 = (-b+root)/2*a;
	float sol_2 = (-b-root)/2*a;
	
	if (root > 0){
		printf("Roots are real and distinct. %f %f",sol_1,sol_2);
	}
	else if(root == 0){
		printf("Roost are real and same. %f %f",sol_1,sol_2);
	}
	else{
		printf("Roots are complex.");
	}
	
	return 0;
}