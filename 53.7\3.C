#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,B,rem;
 
	scanf("%d",&B);
while(B!='\0')
	{
	  rem=B%10;
	  sum=sum+rem;
	 B=B/10;
	}
	printf("%d",sum);
	return 0;
}
