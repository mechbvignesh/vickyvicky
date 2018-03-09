#include <stdio.h>
int main(void)
{
long int X,Y,temp;
scanf("%ld %ld",&X,&Y);
temp=X;
X=Y;
Y=temp;
printf("%ld %ld",X,Y);
return 0;
}
