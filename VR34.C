#include <stdio.h>
#include <string.h>
int main()
{
char k[100];
int count=0,i;
printf("\n paragraph:");
scanf("%[^\n]k",&k);
for(i=1;k[i]!='\0';i++)
{
if(k[i]=='.')
count++;    
}
printf("\n Number of lines are: %d",count);
return 0;
}
