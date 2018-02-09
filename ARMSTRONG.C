#include<stdio.h>
void main()
{
	int x,y,z,rem;
	scanf("%d",&x);
	t=x;
	while(x!=0)
	{
		rem=x%10;
		z=z+rem*rem*rem;
		x=x/10;
	}
	if(y==z)
	{
		printf("yes armstrong");
	}
	else
	{
		printf("no,not armstrong");
	}
}
