#include <stdio.h>
int main(){
	int x,y,z;
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y && x>z){
		printf("%d is the largest number.",x);
	}
	else if(y>x && y>z){
		printf("%d is the largest number.",y);
	}
	else if(z>x && z>y){
		printf("%d is the largest number.",z);
	}
	else{
		printf("All numbers are same.");
	}
	
	
	return 0;
}