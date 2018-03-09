#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
    int i,l,count=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    { 
       if((a[i]>='a' && a[i]<='z') || (a[i]>=0 && a[i]<=9))
       count++;
     }
   if(count>=1)
   printf("Yes");
   else
   printf("No");
   
return 0;
}
