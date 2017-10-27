#include<stdio.h>
#include<stdlib.h>
main()
{

	int *ptr;
	ptr=test();
	printf("valve of a accessed from another file=%d\n",*ptr);
	*ptr=30;
	printf("valve of a accessed from another file=%d\n",*ptr);

	*ptr=40;	
	ptr=test();
	
	printf("valve of a accessed from another file=%d\n",*ptr);

}
