#include<stdio.h>
int main()
{
 int i,a,b[100],n,temp,j;
 printf("enter the number");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 scanf("%d",&b[i]);
 }
 for(a=i+1;a<n;a++)
 {
 scanf("%d",&b[a]);
 }
 if(b[i]>b[j])
 {
 temp=b[i];
 b[i]=b[a];
 b[i]=temp;
 }
 printf("%d",&b[a]);
 return 0;
}
