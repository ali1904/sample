#include<stdio.h>

void print(void);
main()
{
extern int x;
printf("in main()=%d",x);


}

int x=10;

void print(void)
{
printf("%d",x);
}

