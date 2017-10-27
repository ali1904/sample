#include<stdio.h>
main()
{

	int a;
	printf("enter a number to find whether it is even or odd\n");
	scanf("%d",&a);

	if(a&1)
	{
		printf("odd\n");
	}
	else
	{
		printf("even\n");
	}


}
