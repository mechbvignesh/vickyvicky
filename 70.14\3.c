#include <stdio.h>
int main(void) 
{
	int s;
	scanf("%d",&s);
	int p=2;
	while(p<s)
	{
		p<<=2;
	}
	printf("%d",p);
	return 0;
}
