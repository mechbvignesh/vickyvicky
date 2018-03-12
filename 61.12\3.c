#include <stdio.h>
#include<string.h>

int main(void) 
{
	char s[10];
	scanf("%s",s);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
