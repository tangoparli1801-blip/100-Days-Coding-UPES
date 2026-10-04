#include <stdio.h>
int main(){
	int s,h,m;
	
	printf("Enter time in seconds: \n");
	scanf("%d",&s);
	
	h = s/3600;
	m = (s%3600)/60;
	s = s%60;
	
	
	printf("The time is %d:%d:%d",h,m,s);
	
	return 0;
}




