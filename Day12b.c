#include <stdio.h>
int main(){
	int u;
	printf("Enter the Unit:\n");
	scanf("%d",&u);
	
	if(u<=100 && u>0){
		printf("Your electricity bill is %d Rupees.",u*5);
	}
	else if(u>100 && u<=200){
		printf("Your electricity bill is %d Rupees.",(u-100)*7+500);
	}
	else if(u>200 && u<=300){
		printf("Your electricity bill is %d Rupees.",(u-200)*10+1200);
	}
	else if(u>300){
		printf("Your electricity bill is %d Rupees.",(u-300)*12+2200);
	}
	else{
		printf("Invalid input");
	}
	return 0;
}



