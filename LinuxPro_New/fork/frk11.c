#include<stdio.h>
#include<fcntl.h>
#define CHILD 0
static int idata=10;
main()
{
	static int istack=11;


	pid_t pid;


	switch (pid=fork())
	{

		case -1:printf("error\n");

		case 0:idata*=3;
		       istack*=3;
		       break;

		default:idata+=3;
			istack+=3; 
			break;

	}

	printf("PID=%ld %s idata=%d istack=%d\n", (long) getpid(),(pid == 0) ? "(child) " : "(parent)", idata, istack);



}
