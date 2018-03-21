#include <stdio.h>
int main()
{
	int s[10],l[10],o[10];
	int n,i,j;
	scanf("%d",&n);
	printf("enter the number of ninja warriors: %d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&s[i],&l[i]);
		o[i]=l[i]-s[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",o[i]);
	}
	return 0;
}
