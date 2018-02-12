#include<stdio.h>
int main()
{
int a,b=1,c;
printf("\nEnter the number");
scanf("%d",&c);
for(a=1;a<=c;a++)
b=b*a;
printf("\nFactorial os %d is :%d",c,b);
return 0;
}
