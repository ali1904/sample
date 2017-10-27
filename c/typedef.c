#include<stdio.h>
#include<stdlib.h>
main()
{

typedef int  ten[10];

typedef float* fp;

typedef float func(int,char);


fp var;
printf("sizeof array=%ld\n",sizeof(ten));
printf("sizeof pointer=%ld\n",sizeof(var));

}
