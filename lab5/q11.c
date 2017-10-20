#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main(void)
{
	pid_t pid1;
	pid1=fork();
	if(pid1>0)
	{
		printf("this is a parent process\n");
		printf("%d",getpid());
		printf("\n");
		printf("%d",getppid());
		printf("\n");
	}
	else if(pid1==0)
	{
		printf("this is a child process\n");
		printf("%d",getpid());
	printf("\n");
	printf("%d",getppid());
	printf("\n");
	}
	else
	{
		printf("child process could not be created");
	}
return 0;
}



