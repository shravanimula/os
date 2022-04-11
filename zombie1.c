#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		sleep(10);//child is acting as zombie process
		printf("parent process exicuted suceesfully:%d\n",getpid());

	}
	else if(pid==0)
	{
		printf("child process exicute succesfully:%d\n",getpid());
		exit(0);
	}
	else
	{
		printf("child process cannot created succesfully\n");
	}
}
