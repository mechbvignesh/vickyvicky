#include<stdio.h>
int main()
{
int a,b[3],larg,i;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&a);
printf("ENTER THE ARRAY ELEMENTS: ");
for(i=1;i<=a;i++)
{
scanf("%d\n",b[i]);
}
larg=b[0];
for(i=1;i<=a;i++)
{
if(b[i]>larg)
{
larg=b[i];
}
}
printf("Largest in array is %d",larg);
return 0;
}
