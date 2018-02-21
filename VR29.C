#include <stdio.h>
int main() 
{
	int min;
	int a,b;
	scanf("%d",&min);
	a=min/60;
	b=min%60;
	printf("the hour is %d\n",a);
	if(min%60==0)
	printf("the minutes is 0" );
	else
	printf("the minutes is %d",b);
	return 0;
}
