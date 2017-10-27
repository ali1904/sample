


#include<stdio.h>
#include<stdlib.h>

main()
{

	int **p,i,j;


	p=(int**)malloc(3*sizeof(int));

	for(i=0;i<3;i++)
	{
		p[i]=(int*)malloc(3*sizeof(int));
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			scanf("%d",&p[i][j]);
		}
	}

	for(i=0;i<3;i++,printf("\n"))
	{

		for(j=0;j<3;j++)
		{
			printf("%d",p[i][j]);
		}
	}

}
