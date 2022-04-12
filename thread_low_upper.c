#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define SIZE 26

char ch='A'; // shared variable

void *capital_handler()
{
	int i;
	printf("capital alphabet:\n");
	for(i=0;i<SIZE;i++)
	{
		sleep(1);
		printf("%c\n",ch);
	}
}
void *small_handler()
{
	int i;
	printf("small alphabet:\n");
	for(i=0;i<SIZE;i++)
	{
		sleep(1);
		printf("%c\n",ch+32);
		ch++;
	}
}
int main()
{
	pthread_t thread[2];
	pthread_create(&thread[0],NULL,&capital_handler,NULL);
	pthread_create(&thread[1],NULL,&small_handler,NULL);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
	return 0;
}
