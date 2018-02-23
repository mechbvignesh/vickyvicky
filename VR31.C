#include<stdio.h>
#include<string.h>
int main()
{
	char X[100];
	int i,count=0,Y;
	scanf("%s",&X);
	b=strlen(X);
	for(i=0;i<Y;i++)
	{
		if((X[i]='a')&&(X[i]='z')||(X[i]='A')&&(X[i]='Z'))
		{
			count++;
		}
	}
	printf("%d",count);
	return 0; 
}
