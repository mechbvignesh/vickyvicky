#include<stdio.h>
int main()
{
	int X,Y,Z;
	scanf("%d%d",&X,&Y);
	Z=X*Y;
	if(Z%2==0)
	printf("Even");
	else
	printf("Odd");
	return 0;
}
