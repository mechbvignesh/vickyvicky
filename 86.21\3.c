#include <stdio.h>
#include<string.h>
int main(void)
{
 char s[1000];
 int l,i,count=0;
 scanf("%s",s);
  l=strlen(s);
  for(i=0;i<l;i++)
   {
      if(s[i]==s[i+1]){
      count++;}
   }
   if(count>0)
   printf("No");
   else
  printf("Yes");
 return 0;
}
