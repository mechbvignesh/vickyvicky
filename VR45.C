#include <stdio.h>
int main() 
{
	char b[10];
	int i,count=0;
	scanf("%s",&b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>='0' && b[i]<='9')
		{
			count=count+1;
		}
	}
	printf("%d",count);
	getch ();
	return 0;
}
