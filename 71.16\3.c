#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50],temp[10];
	int i,j,a,b;
	printf("enter the string:");
	scanf("%s",str);
	a=strlen(str);
	while(i<j)
	{
		for(i=0;i<a;i++)
		{
			for(j=a;j>=1;j--)
			{
				temp[b]=str[i];
				str[i]=str[j];
				str[j]=str[i];
			}
		}
	}
	printf("\nyes");
	return 0;
}
