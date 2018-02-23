#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i,count=0,y;
	scanf("%s",&x);
	y=strlen[x];
	for(i=0;i<y;i++)
	{
		if(x[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
	return 0; 
}
