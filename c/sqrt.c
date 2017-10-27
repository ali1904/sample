#include<stdio.h>
#include<math.h>
main()
{

	int i,n;
	printf("enter a number\n");
	scanf("%d",&n);

	for(i=2;i<sqrt(n);i++)
	{

		if(n%i==0)
			break;

		if(i>sqrt(n))
		{
			printf("%d is prime\n",n);

		}
		else
		{
			printf("%d is not a prime\n",n);
		}
	}



}

