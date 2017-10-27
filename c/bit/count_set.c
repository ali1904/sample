#include<stdio.h>
main()
{

	int num,bit,cnt=0;
	printf("enter a number\n");
	scanf("%d",&num);

/*	for(bit=0;bit<=31;bit++)
	{

		if(num&(1<<bit))
		{
			cnt++;
		}
	}*/

	while(num)
	{
		if(num&1)
		{
		cnt++;
		}
		num>>=1;
	}



	printf("number of set bits=%d\n",cnt);

}
