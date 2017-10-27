#include<stdio.h>
struct ali{

	int a;
	char b;
	struct ali *p;
};

struct temp{

	int a;
	char b;
};
main()
{

	struct ali var={10,'z'};

	struct temp var1;

	var.p=&var1;

		printf("%d,%c\n",var1.a,var1.b);


}
