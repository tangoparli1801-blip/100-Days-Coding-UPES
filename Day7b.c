#include <stdio.h>
int main(){
	char n;
	printf("Enter the letter you want to check:\n ");
	scanf("%c",&n);
	
	if((n == 'a')||(n=='e')||(n=='i')||(n=='o')||(n=='u')){
		printf("%c is a vowel.",n);
	}
	else{
		printf("%c is a consonant.",n);
	}	
	
	return 0 ;
}