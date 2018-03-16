#include <stdio.h>
int main()
{
	char s[20];
     int l,i,flag=0;
     scanf("%s",s);
     l=strlen(s);
     for(i=0;i<l;i++)
     {
       if(s[i]=='s'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
       { 
       flag=1;
       }
     }
    if(flag==1)
    printf("yes");
    else
    printf("no");

	return 0;
}
