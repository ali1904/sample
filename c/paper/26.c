#include<stdio.h>
main()
{

	char s[]="\0";

	if(printf("%s\n",s)==1)
		printf("true\n");
	else
		printf("false\n");


}
