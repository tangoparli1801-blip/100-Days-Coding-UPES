#include <stdio.h>
int main(){
	int d;
	printf("Enter the number of days you have been late for: \n");
	scanf("%d",&d);
	
	if(0<d && d<=5){
		printf("Your fine is %d rupees.",d*2);
	}
	else if(5<d && d<=10){
		printf("Your fine is %d rupees.",(d-5)*4+10);
	}
	else if(10<d && d<=30){
		printf("Your fine is %d rupees.",(d-10)*6+30);
	}
	else if(30<d){
		printf("Your Membership is cancelled.");
	}
	else{
		printf("Invalid input");
	}
	return 0;
	
}