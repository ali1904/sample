#include<stdio.h>
main()
{
	int n,bit;
	int l,r,a,b;
	printf("enter an integer:");
	scanf("%d",&n);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(n>>bit)&1);
	}
	for(l=31,r=0;r<l;r++,l--)
	{
		a=(n>>l)&1;
		b=(n>>r)&1;                                   
		if(a!=b)
		{
			n=n^(1<<l);
			n=n^(1<<r);
		}
	}
	printf("\n");
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(n>>bit)&1);
	}
}

