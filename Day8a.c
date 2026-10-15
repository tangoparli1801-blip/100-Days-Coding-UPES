#include <stdio.h>
int main() {
	char n;
	printf("Enter a character:\n");
	scanf("%c",&n);
	
	if(n>='a' && n<='z'){
		printf("It is a lowercase letter.");
	}
	else if(n>='A' && n<='Z'){
		printf("It is a uppercase letter.");
	}
	else if(n>='1' && n<='9'){
		printf("It is a digit.");
	}
	else{
		printf("It is a special character.");
	}
	return 0 ;
}