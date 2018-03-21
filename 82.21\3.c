#include <stdio.h>

int main(void) 
{
	float x,y,z;
	printf("enter the length and breadth value:");
	scanf("%f %f",&x,&y);
	z=x*y;
	printf("\n%0.5f",z);
	return 0;
}
