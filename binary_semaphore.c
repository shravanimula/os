#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
#define SIZE 20
int arr[SIZE];
sem_t sem;
void *even()
{
	int i;
	sem_wait(&sem);//enter section
	for(i=1;i<=SIZE;i++)
	{
		if(i%2==0)
		{
			sleep(1);
			arr[i]=i;
			printf("%d\n",arr[i]);
		}
	}
	printf("even_thread function ID:%ld\n",pthread_self());
	printf("even_thread fuction executed successfully\n");
	sem_post(&sem);//exitsection
}
void *odd()
{
	int i;
	sem_wait(&sem);//enter section
	for(i=1;i<=SIZE;i++)
	{
		if(i%2==1)
		{
			sleep(1);
			arr[i]=i;
			printf("%d\n",arr[i]);
		}
	}
	printf("odd_thread function ID:%ld\n",pthread_self());
	printf("odd_thread fuction executed successfully\n");
	sem_post(&sem);//exitsection
}
int main()
{
	sem_init(&sem,0,1);
	pthread_t thread[2];
	pthread_create(&thread[0],NULL,&even,NULL);
	pthread_create(&thread[1],NULL,&odd,NULL);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
	sem_destroy(&sem);
	return 0;
}
