#include <stdio.h>
#include <string.h>
int main(void) 
{
	char s[15];
	int n,l;
	scanf("%s",s);
	scanf("%d",&n);
	int len=strlen(s);
	for(int i=0;i<n;i++)
	{
	            l=len-1;
		printf("%c",s[l]);
		len--;
	}
	return 0;
}
