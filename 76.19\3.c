#include<stdio.h>
int main(void)
{
int a,i,flag=0;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n no");
}
else
{
printf("\n yes");
}
return 0;
}76.19\3.c
