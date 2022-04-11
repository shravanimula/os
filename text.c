#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#define size 1024
int main()
{
	int fd;
	char buf[size]="aaaaaaa";
	char bufout[size];
	//fd=open("myfile1.txt",O_CREAT|O_RDWR,S_IWUSR|S_IRUSR);
	fd=open("myfile1.txt",O_RDWR);
	if(fd<0)
	{
		printf("file is not open\n");
		printf("fd:%d\n",fd);
	}
	else 
	{
		printf("file open succesfully\n");
		printf("fd:%d\n",fd);
		write(fd,buf,strlen(buf)+1);
		lseek(fd,0,SEEK_SET);
		read(fd,bufout,strlen(buf)+1);
		printf("myfile1.txt:%s\n",bufout);
	}
}


