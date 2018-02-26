#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int l,count=0;
scanf("%[^\n]s",&str);
for(l=0;str[l]!='\0';l++)
{
if(str[l]>='0'&&str[l]<='9')
count++;
}
printf("%d",count);
return 0;
}
