#include<stdio.h>
#include<string.h>
int str_len(char* str)
{
	int cnt=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		cnt++;
	}
	return cnt;
}
int main()
{
	char s[50];
	int length;
	printf("enter a string\n");
//	fgets(s,sizeof(s),stdin);
	gets(s);
	//scanf("%s",s);
	length=str_len(s);
	printf("length of the string:%d\n",length);
}
