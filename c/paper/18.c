#include<stdio.h>
#include<stdlib.h>

 int *p=(int*)malloc(sizeof(int));
main()
{

*p=20;
p++;

(*p)++;

}
