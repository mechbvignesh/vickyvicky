#include<stdio.h>
int main()
{
int a,b[3],larg,i;
printf("enter the number of element:");
scanf("%d",&a);
printf("enter the array number:");
for(i=1;i<=a;i++)
{
scanf("%d\n",&b[i]);
}
larg=b[0];
for(i=1;i<=a;i++)
{
if(b[i]=larg)
{
larg=b[i];
}
}
printf("medium array number is %d",larg);
return 0;
}
