#include<stdio.h>
int main()
{
	int i,j,swap;
	scanf("%d%d",&i,&j);
	swap=i;
	i=j;
	j=swap;
	printf("%d %d",i,j);
	return 0;
}
