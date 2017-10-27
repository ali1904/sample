#include<stdio.h>
main()
{
int num;
printf("enter a number to find power of 2\n");
scanf("%d",&num);

if(num&(num-1))
{
	printf("not power of 2\n");
	
}
else
{
	printf("power of 2\n");
}

}
