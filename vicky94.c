#include<stdio.h>
int main(void)
{
int x[20],y,z,i;
scanf("%d %d",&y,&z);
for(i=1;i<=y;i++)
scanf("%d",&x[i]);
for(i=1;i<=z;i++)
     {
        if(i==z)
        printf("%d ",x[i]);
     }
	return 0;
}
