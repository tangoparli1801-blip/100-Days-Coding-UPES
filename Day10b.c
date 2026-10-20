#include <stdio.h>
int main(){
	int n;
	printf("Enter any number between 1--7:\n");
	scanf("%d",&n);
	
	
	switch(n){
		case 1:
		printf("The day is Sunday");
		break;
		case 2:
		printf("The day is Monaday");
		break;
		case 3:
		printf("The day is Tuesday");
		break;
		case 4:
		printf("The day is Wednesday");
		break;
		case 5:
		printf("The day is Thursday");
		break;
		case 6:
		printf("The day is Friday");
		break;
		case 7:
		printf("The day is Saturday");
		break;
		default:
		printf("The number is not between 1-7");
		
		
	}
	return 0;
}



