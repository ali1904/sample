#include<stdio.h>
#include<stdlib.h>
main()
{

int *ptr[3],i;

int a[3][3];

for(i=0;i<3;i++)
{
ptr[i]=a[i];
}

printf("actual address of pointer=%p\n",ptr);

printf("increment address of pointer=%p\n",ptr+1);

}
