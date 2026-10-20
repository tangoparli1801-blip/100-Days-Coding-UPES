#include <stdio.h>
 int main(){
	int n;	
	printf("Enter a number between 1-12;\n ");
	scanf("%d",&n);
	
	switch(n){
		case 1:
		printf("The month is January with 31 days.");
		break;
		case 2:
		printf("The month is February with 28 days.");
		break;
		case 3:
		printf("The month is March with 31 days.");
		break;
		case 4:
		printf("The month is April with 30 days.");
		break;
		case 5:
		printf("The month is May with 31 days.");
		break;
		case 6:
		printf("The month is June with 30 days.");
		break;
		case 7:
		printf("The month is July with 31 days.");
		break;
		case 8:
		printf("The month is August with 31 days.");
		break;
		case 9:
		printf("The month is September with 30 days.");
		break;
		case 10:
		printf("The month is October with 31 days.");
		break;
		case 11:
		printf("The month is November with 30 days.");
		break;
		case 12:
		printf("The month is December with 31 days.");
		break;
		default:
		printf("The number is not between 1-12.");
	}
	return 0;
}













