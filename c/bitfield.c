#include<stdio.h>

int func()
{

static int num=16;
return num--;

}
main()
{

for(func();func();func())
printf("%d",func());
return 0;
} 
