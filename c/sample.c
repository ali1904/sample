#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct {
int a;
int b;
};


int main()
{
	
	int N,i,j;
	char *arr[5];
	char temp[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		arr[i]=malloc(10*sizeof(char));
	}

	for(i=0;i<N;i++)
	{
		scanf("%s",arr[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(strlen(arr[i])<strlen(arr[j]))
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		} 
	}
}
