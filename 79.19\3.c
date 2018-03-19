#include <stdio.h>
int main(void)
{
	int a,b,c,i,d,flag=0;
	scanf("%d %d",&a,&b);
	c=b*a;
	for(i=1;i<=c/2;i++)
	{
		d=i*i;
		if(d==c)
		{
			printf("yes");
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	printf("no");
	return 0;
}
