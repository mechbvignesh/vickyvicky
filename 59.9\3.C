#include<stdio.h>
int main()
{
	int l[10],i,large;
for(i=0;i<10;i++)
{
	scanf("%d",&l[i]);
}
l[0]=large;
for(i=0;i<10;i++)
{
	if(l[i]>large)
	{
	large=l[i];
	}
}
printf("%d",large);
return 0;
}
