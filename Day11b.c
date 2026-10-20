#include <stdio.h>
int main(){
	float cp,sp;
	printf("Enter the costprice and selling price of item:\n");
	scanf("%d %d",&cp,&sp);
	
	if (sp < cp){
		float perc = ((cp - sp)/cp)*100;
		printf("You had loss in this item of %f %%.",perc);
	}
	else if(sp > cp){
		float perc = ((sp - cp)/cp)*100;
		printf("You had profit in this item of %f %%.",perc);
	}
	else{
		printf("No Profit No Loss.");
	}
	return 0;
}