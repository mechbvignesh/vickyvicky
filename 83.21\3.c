#include <stdio.h>
int main(void)
{
 long int n,m;
 char c;
 int i;
 for(i=0;i<4;i++)
 {
    scanf("%ld %c %ld",&n,&c,&m);
    if(c=='/')
    {
       printf("%ld\n",n/m);
}
else if(c=='%')
   {
      printf("%ld\n",(n%m));
}
}
return 0;
}
