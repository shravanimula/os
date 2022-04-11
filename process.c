#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	getchar();
	pid=fork();//it stores the ids
	if(pid==-1)
	{
		printf("fork fail\n");
	}
	if(pid==0)
	{
		sleep(1);
		exit(0);
		printf("child process is created\n");
		printf("child process pid:%d\n",getpid());
		printf("child process parent id:%d\n",getppid());
		//exit(1);
	}
	else
	{
		sleep(2);
		wait(NULL);
		printf("parent process is created\n");
		printf("parent process pid:%d\n",getpid());
		printf("parent process parent id:%d\n",getppid());
	}
}
