#include<stdio.h>
int main()
{
	int i,j,k;

	scanf("%d%d",&i,&j);
	printf("Range: %d,%d\n",i,j);
	scanf("%d",&k);
	if(k<=i&&k<=j)
	printf("yes");
	else
	printf("no");
	return 0;
}
