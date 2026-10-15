#include <stdio.h>
int main() {
	int m;
	printf("Enter your marks:\n");
	scanf("%d",&m);
	if(m >= 90){
		printf("Grade A");
	}
	else if (m >= 80 && m <=89){
		printf("Grade B");
	}
	else if(m >= 70 && m <= 79){
		printf("Grade C");
	}
	else if(m >= 60 && m <= 69){
		printf("Grade D");
	}
	else{
		printf("Grade F");
	}
	
	return 0;
}