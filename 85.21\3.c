#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int b,i;
	scanf("%s",&s);
	b=strlen(s);
	for(i=0;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%c",s[i]);
		}
	}
	printf("\t");
	for(i=0;i<=b;i++)
	{
	if(i%2!=0)
	{
		printf("%c",s[i]);
	}
	}
	return 0;
}
