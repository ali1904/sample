#include<stdio.h>

static int a=20;
int *p=&a;
int* test()
{
	printf("in function=%p\n",p);
	printf("return address\n");
	return p;
}
