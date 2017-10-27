#include<stdio.h>
#include<stdlib.h>


#define exp(x,y,z) (x*y-z)/(x^z)

int main()
{

	int a=1,b=2,c=3;
	int output;
	output =exp(a*b,b-a,c^c);
	printf("%d",output);
	return 0;

}


