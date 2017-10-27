#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
	int i =100;
	void *p, *p1;

	mallopt(M_TOP_PAD, 0);
	mallopt(M_MMAP_THRESHOLD, 4096);		
	malloc_stats();
	getchar();

	p = (void *)malloc(4096 * 2);
	printf("memory of 4096 bytes allocated\n");
	malloc_stats();
	getchar();

	free(p);
	printf("memory freed\n");
	malloc_stats();
	getchar();
	
	printf("allocating 1024 bytes\n");
	p1 = (void *)malloc(1024);
	malloc_stats();
	getchar();

	printf("freeing 1024 bytes\n");
	free(p1);
	malloc_stats();
	getchar();

	printf("allocating 4096*2 bytes\n");
	p = (void *)malloc(4096 * 2);
	malloc_stats();
	getchar();

	printf("freeing the memory\n");
	free(p);
	malloc_stats();
	getchar();
	return 0;
}
