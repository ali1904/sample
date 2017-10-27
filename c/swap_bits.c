#include<stdio.h>
main()
{
	int a=10;
	int i,j;
	int low,up;

	for(i=31;i>=0;i--)
	{
		printf("%d",(a>>i)&1);

	}

	for(i=8,j=7;i>=0;i=i-2,j=j-2)
	{
		low=a&i;
		up =a&j;

		if(low!=up)
		{
			
			a^=(1<<i);
			a^=(1<<j);
		}

	}
	
	printf("\n");
	for(i=7;i>=4;i--)
	{

		printf("%d",(a>>i)&1);
	
	}

}
