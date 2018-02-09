#include<stdio.h>
int main()
{
int a,b,c,d,e=0;
printf("\n Enter the range....");
scanf("%d%d",&b,&c);
for (a=b;a<=c;a++)
{
     for(d=2; d<=a/2; ++d)
{
if(a%d==0)
        {
            e=1;
            break;
        }
}
 
    if (e==0)
printf("\n%d",i);
}
return 0;
}
