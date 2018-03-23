#include <stdio.h>
int main(void)
{
	int s[20],n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
                 sum=sum+s[i];
	}
	printf("%d",sum);
	return 0;
}
