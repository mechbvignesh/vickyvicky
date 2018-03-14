#include<stdio.h>
int main()
{
	int i,S;
	scanf("%d",&S);
	while(S!=0)
	{
		if(S%10==0)
		{
			printf("%d",S);
			break;
		}
		S++;
	}
	return 0;
}
