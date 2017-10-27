#include<stdio.h>

char * reverse (char *str)
{

	int i=0;
	while(str[i])
	{

		if(str[i]==' ')
		{
			str[i]='\0';
			reverse(str+i+1);
			printf("%s",str);	
		}

	}
	return;
}
main()
{

	char str[]="i am the best";

	reverse(str);



}
