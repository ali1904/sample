#include<stdio.h>
main()
{

	int data,bit,i;
	int low,high;
	printf("enter a number\n");
	scanf("%d",&data);
	
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(data>>bit)&1);
	}

	printf("enter low and high valves to set bits\n");
	scanf("%d%d",&low,&high);

	for(i=low;i<=high;i++)
	{
		data|=(1<<i);
	}

	for(bit=31;bit>=0;bit--)
	{

		printf("%d",(data>>bit)&1);

	}
}
