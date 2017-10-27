/* test application to show how to load shared objects as runtime libs */
#include <stdio.h>

int main()
{
	
	printf("in main\n");


	test(1);
	test1();
	getchar();
}
