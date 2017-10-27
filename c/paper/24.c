#include<stdio.h>
main()
{
	void *var;
	int x=2;
	int *i=x;
	var=i;
	printf("%d",*(&var));
	
}
