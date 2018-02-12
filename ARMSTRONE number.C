#include<stdio.h>
    int main()
    {
    	int x,y,z,w,v=0,i;
    	printf("Enter the limits:");
    	scanf("%d%d",&x,&y);
 
    	for(i=x;i<=y;i++)
    	{
    		z=i;
    		w=0;
    	while(z>0)
    	{
    	w=z%10;
    	z=z/10;
    	v=v+(z*z*z);
    	}
    	if(e==i)
    	{
    		printf("\n%d",i);
    	}
    	}
    return 0;
    	}
