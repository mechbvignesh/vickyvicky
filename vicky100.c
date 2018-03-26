#include <stdio.h>

int main(void) {
	int n,m,i,product=1;
	scanf("%d",&n);
	for(i=1;n!='\0';i++)
	{
		m=n%10;
		product=product*m;
		n=n/10;
	}
	printf("%d",product);
	return 0;
}
