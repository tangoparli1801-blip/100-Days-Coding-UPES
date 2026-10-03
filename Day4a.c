#include <stdio.h>
int main() {
	int a,b;
	a=4;
	b=5;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d\n%d",a,b);
	return 0;
}