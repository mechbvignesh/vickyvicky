#include <stdio.h>
int main(void)
{
	char s[10];
	int x,i;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		
		x=(int)(s[i]);
		if(x%2!=0)
		{
			printf("\n%c",s[i]);	
		}
	}
	return 0;
}
