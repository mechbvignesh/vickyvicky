int main()
{
	int x[100],i,small;
	for(i=0;i<10;i++)
	{
	scanf("%d",&x[i]);
	}
small=x[i];
for(i=0;i<10;i++)
{
	if(x[i]<small)
	{
	 small=x[i];
	}
	printf("%d  ",small);
}
return 0;
}
