#include<stdio.h>
int main()
{
	int L,O[100],large,small,i;
	scanf("%d",&L);
	for(i=0;i<L;i++)
	{
		scanf("%d",&O[i]);
		
	}
	large=O[0];
	for(i=0;i<L;i++)
	{
	if(O[i]>large)
	{
		large=O[i];
	}

	}
		printf("Large %d\n",large);
	small=O[0];
	for(i=0;i<L;i++)
	{
		if(O[i]<small)
		{
			small=O[i];
		}
	
	}
		printf("small %d",small);
	return 0;
}
