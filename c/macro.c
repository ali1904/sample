#include<stdio.h>
#define a "3\n"

main()
{

printf(a);

#undef a

#define a "5\n"

printf(a);

} 

