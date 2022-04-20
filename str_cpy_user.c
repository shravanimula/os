#include<stdio.h>
#include<stdlib.h>
void mystrcpy(char dest[],char src[])
{
	int i=0;
	for(i=0;src[i]!='\0';i++)
		dest[i]=src[i];
	dest[i]='\0';
	printf("dest of string and src string:%s\t%s\n",dest,src);
}
void stringCpy(char* dest,char* src)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0'; 
	printf("dest=%s\n,src=%s\n",dest,src);
}
int main()
{
	char s1[30],s2[30];
	printf("enter  a string1:");
	fgets(s1,30,stdin);
	printf("enter a string2:");
	fgets(s2,30,stdin);
	printf("source string and destination string :%s\t%s\n",s1,s2);
	mystrcpy(s2,s1);
	stringCpy(s2,s1);
}

