#include<stdio.h>
int main()
{
	int i,n;
	char x[100];
	scanf("%s",&x);
            n=strlen(x);
	for(i=0;i<n;i++)
	{
	printf("%c ",x[i]);
	}

	return 0;
}
