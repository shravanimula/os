#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread_fun(void *ptr)
{
	for(int i=0;i<5;i++)
	{
		sleep(2);
		printf("thread running\n");
	}
}
int main()
{
	pthread_t thread;
	char *msg="india";
	pthread_create(&thread,NULL,&thread_fun,(void *) msg);
	pthread_join(thread,NULL);
}

