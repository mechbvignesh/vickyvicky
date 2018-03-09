#include<stdio.h>
int main()
{
	int O[10],i,large;
for(i=0;i<10;i++)
{
	scanf("%d",&O[i]);
}
O[0]=large;
for(i=0;i<10;i++)
{
	if(O[i]>large)
	{
	large=O[i];
	}
}
printf("%d",large);
return 0;
}
