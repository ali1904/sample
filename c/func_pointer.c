#include<stdio.h>

int(*fp[4])(int ,int);



int function(int a,int b,void (*fp)(int))
{
	
	int result;
	result=a+b;
	fp(result);
	 

}

void function1(int a)
{

printf("result of sum=%d\n",a);


}


main()
{

int a=10,b=20;
int (*func)(int,int,void(*fp)(int));

void(*p)(int);
p=function1;

func=function;
func(a,b,p);

}
