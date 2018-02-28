#include<stdio.h>
int main()
{
	int O,first=0,second=1,next,i;
	scanf("%d",&O);
for(i=1;i<=O;i++)
{
	if(i<=1)
	next=i;
	else
	{
		next=first+second;
		first=second;
		second=next;
	}
	printf("%d ",next);
}

return 0;
