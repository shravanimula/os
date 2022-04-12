#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define SIZE 20

int arr[SIZE];// shared varaible
void *Even()
{
	int i;
	for(i=0;i<=SIZE;i++)
	{
		if(i%2==0)
		{
			sleep(1);
			arr[i]=i;
			printf("%d\n",arr[i]);
		}
	}
}
void *Odd() 
{
	int i;
	for(i=0;i<=SIZE;i++)
	{
		if(i%2==1)
		{
			sleep(1);
			arr[i]=i;
			printf("%d\n",arr[i]);
		}	
	}
}
int main()
{
	pthread_t thread[2];
	pthread_create(&thread[0],NULL,&Even,NULL);
	pthread_create(&thread[1],NULL,&Odd,NULL);
	pthread_join(thread[0],NULL);
	pthread_join(thread[1],NULL);
	return 0;
}


