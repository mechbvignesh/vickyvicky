#include<stdio.h>
int main()
{
	int x,y[100],avg,sum=0,i;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&y[i]);
	}
	for(i=0;i<x;i++)
	{
		sum=sum+y[i];
	}
	avg=sum/x;
	printf("%d",avg);
	return 0;
}
