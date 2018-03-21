#include <stdio.h>
int main(void)
{
	int s,d;
	int gcd;
	int i;
	scanf("%d %d",&s,&d);
	for(i=1;i<=s && i<=d;i++)
	{
		if(s%i==0 && d%i==0)
		{
			gcd=i;
		}
	}
	printf("%d",gcd);
	return 0;
}
