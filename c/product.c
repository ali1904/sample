#include<stdio.h>

int product(int a,int b)
{

	int temp=0;
	while(b)
	{
		temp+=a;
		b--;
	}
	return temp;		
}

int division(int a,int b)
{
	int temp=0;
	while(a>=b)
	{
		a-=b;
		temp++;
	}
	return temp;

}

int modulus(int a,int b)
{
	while(a>=b)
		a-=b;
	return a;


}
main()
{

	int a,b,result;
	printf("enter wo numbers\n");
	scanf("%d%d",&a,&b);

	printf("product of two numbers=%d\n",product(a,b));
	printf("division od two numbers=%d\n",division(a,b));
	printf("modulus of two numbers=%d\n",modulus(a,b));
	
}
