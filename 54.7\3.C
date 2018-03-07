#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if(y%2==0)
	{
		printf("%d",y-2);
	}
	else
	{
		printf("%d",y-1);
	}
	return 0;
}
