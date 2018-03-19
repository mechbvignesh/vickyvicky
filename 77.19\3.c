#include <stdio.h>
int main(void) 
{
	int s,i;
	scanf("%d",&s);
	for(i=1;i<s;i++)
	{
		if(s%i==0)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
