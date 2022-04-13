#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
#define SIZE 26
char ch='A';//shared variable
pthread_mutex_t mutex;
void *capital_letter()
{
	int i;
	pthread_mutex_lock(&mutex);//entry  section
	printf("captial letters\n");
	for(i=1;i<=SIZE;i++)
	{
		sleep(1);
		printf("%c\n",ch);
		ch++;
	}
	printf("captial alphabet thread function ID:%ld\n",pthread_self());
	printf("captial alphabet thread fumction executed successfully\n");
	pthread_mutex_unlock(&mutex);
}
void *small_letter()
{
	int i;
	pthread_mutex_lock(&mutex);//entry  section
	printf("small letters\n");
	for(i=1;i<=SIZE;i++)
	{
		sleep(1);
		printf("%c\n",ch+6);
		ch++;
	}
	printf("small alphabet thread function ID:%ld\n",pthread_self());
	printf("small alphabet thread fumction executed successfully\n");
	pthread_mutex_unlock(&mutex);
}
int main()
{
	pthread_t thread[2];
	pthread_mutex_init(&mutex,NULL);//mutex intialization
	pthread_create(&thread[0],NULL,&capital_letter,NULL);
	pthread_create(&thread[1],NULL,&small_letter,NULL);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
	pthread_mutex_destroy(&mutex);//destroy the mutex
	return 0;
}
