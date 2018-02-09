#include<stdio.h>
int main()
{
int i,j;
printf("Enter The number till:");
scanf("%d",&j);
printf("Odd numbers between the limits are %d\n",j);
for(i=0;i<=j;i++)
{
if((i%2)!=0)
{
printf("%d\n",i);
}
}
return 0;
